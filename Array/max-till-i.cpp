#include <iostream>
using namespace std;
#include <math.h>

int main() {
    int n = 6;
    int arr[n] = {1, 0, 5, 4, 6, 8};
    int max = INT32_MIN;
    // cout << max;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        cout << max << " ";
    }
    return 0;
}