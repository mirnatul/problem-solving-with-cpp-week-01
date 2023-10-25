#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n;
    int maxNo = INT_MIN, minNo = INT_MAX;

    cin >> n;
    int num_array[n];

    for (int i = 0; i < n; i++) {
        cin >> num_array[i];
    }

    for (int j = 0; j < n; j++) {
        maxNo = max(maxNo, num_array[j]);
        minNo = min(minNo, num_array[j]);
    }

    cout << endl
         << minNo << endl
         << maxNo << endl;

    return 0;
}