#include <iostream>
using namespace std;

int main() {
    int var1 = 5;
    int var2 = 6;
    if ((var2 = 1) == var1)
        cout << var2;
    else
        cout << (var2 + 1)<<endl;

    int a = 10, b = 20, c = 30;
    if (a <= b && !b) {
        cout << "hello";
    } else if (c >= a && c >= b) {
        cout << "hi";
    } else {
        cout << "hey";
    }
}