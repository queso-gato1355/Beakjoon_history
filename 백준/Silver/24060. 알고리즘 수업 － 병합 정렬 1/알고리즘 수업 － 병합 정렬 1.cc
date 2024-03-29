#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int count = 0;
int saved_num = -1;

void merge(vector<int>& a, int left, int mid, int right, int saved_count) {
    static vector<int> tmp(a.size()); // static 선언이 도움이 될까?
    int i = left, j = mid+1, k = left;
    while(i <= mid && j <= right) {
        if (a[i] <= a[j])
            tmp[k++] = a[i++];
        else 
            tmp[k++] = a[j++];
    }
    while (i <= mid)
        tmp[k++] = a[i++];
    while (j <= right)
        tmp[k++] = a[j++];

    i = left;
    k = left;

    while(i <= right) {
        count++;
        if (count == saved_count) {
            saved_num = tmp[k];
            return;
        }
        a[i++] = tmp[k++];
    }
}

void merge_sort(vector<int>& a, int left, int right, int num_queue) {
    if (left < right && saved_num == -1) {
        int mid = (left + right) / 2;
        merge_sort(a, left, mid, num_queue);
        merge_sort(a, mid+1, right, num_queue);
        merge(a, left, mid, right, num_queue);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr_size, save_count, numbers;
    cin >> arr_size >> save_count;
    vector<int> k(arr_size);
    for(int i = 0; i < arr_size; i++) 
        cin >> k[i];
    
    merge_sort(k, 0, arr_size - 1, save_count);
    cout << saved_num << endl;
    
    return 0;
}