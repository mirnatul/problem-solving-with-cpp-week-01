#include <iostream>
using namespace std;

int count_the_prime(int min, int max, int prime) {
    for (int i = min; i < max; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            } else {
                prime = 1;
            }
        }
        if (prime == 1) {
            cout << i << endl;
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int min, max, prime;
    cin >> min >> max;
    count_the_prime(min, max, prime);

    return 0;
}