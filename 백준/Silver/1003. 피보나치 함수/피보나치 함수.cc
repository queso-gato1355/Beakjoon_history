#include <iostream>

int main() {
    int d[41] = {0, 1, 1};
    for(int i = 3; i < 41; i++) d[i] = d[i-1] + d[i-2];
    int t, v;
    std::cin >> t;
    for(; t > 0; --t) {
        std::cin >> v;
        if(!v) std::cout << "1 0\n";
        else if(v==1) std::cout << "0 1\n";
        else std::cout << d[v-1] << " " << d[v] << std::endl;
    }
    return 0;
}