#include <iostream>
#include <string>
using namespace std;
int main() {
    unsigned int ch, ch2;
    int n, l, lin;
    string str;

    while (cin >> n >> l >> ch) {
        lin = 1;
        ch2 = 0;

        while (n--) {
            cin >> str;
            if (ch2 + str.length() <= ch) {
                ch2 += str.length() + 1;
            } else {
                ch2 = str.length() + 1;
                lin++;
            }
        }

        if (lin % l != 0) {
            cout << lin / l + 1 << endl;
        } else {
            cout << lin / l << endl;
        }
    }
    return 0;
}