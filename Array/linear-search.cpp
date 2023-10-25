#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    for (int j = 0; j < n; j++) {
        if (arr[j] == key) {
            cout << j;
        }
    }

    return 0;
}