#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int before_height, before_width, before_coin_num = 0;
    cin >> before_height >> before_width;
    vector<vector<int>> before_map(before_height, vector<int>(before_width, 0));
    char buffer;
    for(int i = 0; i < before_height; i++) {
        for(int j = 0; j < before_width; j++) {
            cin >> buffer;
            if (buffer == 'O') {
                before_map[i][j] = 1;
                before_coin_num++;
            }
            else before_map[i][j] = 0;
        }
    }
    int after_height, after_width, after_coin_num = 0;
    cin >> after_height >> after_width;
    vector<vector<int>> after_map(after_height, vector<int>(after_width, 0));
    for(int i = 0; i < after_height; i++) {
        for(int j = 0; j < after_width; j++) {
            cin >> buffer;
            if (buffer == 'O') {
                after_map[i][j] = 1;
                after_coin_num++;
            }
            else after_map[i][j] = 0;
        }
    }
    // check the overlapped parts
    int plate_width = after_width + before_width - 1;
    int plate_height = after_height + before_height - 1;
    int max_overlap = 0, overlap = 0;
    //cout << "INSPECTION..." << '\n';
    for(int i = 0; i < plate_height; i++) {
        for(int j = 0; j < plate_width; j++) {
            //cout << "after plate starts at (" << j << ", " << i << ").\n";
            int b_x, b_y = i <= after_height - 1 ? 0 : i - after_height + 1;
            for(int y = 0; y < after_height; y++) {
                if (y + i < after_height - 1 || y + i >= plate_height || b_y >= before_height) continue;
                b_x = j <= after_width - 1 ? 0 : j - after_width + 1;
                for(int x = 0; x < after_width; x++) {
                    if(x + j < after_width - 1 || x + j >= plate_width || b_x >= before_width) continue;
                    //cout << "Overlapped coordinate on before (" << b_x << ", " << b_y << ").\n";
                    //cout << "Overlapped coordinate on after  (" << x << ", " << y << ").\n";
                    if (after_map[y][x] == 1 && after_map[y][x] == before_map[b_y][b_x]) overlap++;
                    b_x++;
                }
                b_y++;
            }
            //cout << "overlap     : " << overlap << '\n';
            if (max_overlap < overlap) max_overlap = overlap;
            overlap = 0;
        }
    }

    cout << before_coin_num - max_overlap << '\n';
    return 0;
}