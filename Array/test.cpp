#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int len = sizeof(arr) / sizeof(arr[0]);
    cout << len << endl;

    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}