// You have 15 tk. 1 tk = 1 chocolate. 3 wrapper = 1 chocolate. How many chocolate you can buy? Ans: 22
#include <iostream>
using namespace std;

int main() {
    int money_count, chocolate_count;
    int chocolatePrice = 1;
    cin >> money_count;

    chocolate_count = money_count;
    int wrapper_count = money_count;
    int chocolate, wrap;

    while (wrapper_count > 3) {
        wrap = wrapper_count % 3;
        chocolate = wrapper_count / 3;

        wrapper_count = chocolate + wrap;
        chocolate_count += wrapper_count / 3;
    }
    cout << chocolate_count + (money_count / 3);
    return 0;
}