// You have 15 tk. 1 tk = 1 chocolate. 3 wrapper = 1 chocolate. How many chocolate you can buy? Ans: 22
#include <iostream>
using namespace std;

int main() {
    int money_count, chocolate_count, wrapper_count;
    cin >> money_count;

    wrapper_count = money_count;
    chocolate_count = money_count + (wrapper_count / 3);

    int chocolate, wrap;

    while (wrapper_count > 3) {
        wrap = wrapper_count % 3;
        chocolate = wrapper_count / 3;

        wrapper_count = chocolate + wrap;
        chocolate_count += wrapper_count / 3;
    }
    cout << chocolate_count;
    return 0;
}