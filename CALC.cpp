#include <iostream>

using namespace std;

int main() {
    char znak;
    int a, b;
    while (cin >> znak >> a >> b) {
        switch (znak) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;

                break;
            case '/':
                cout << a / b << endl;

                break;
            case '*':
                cout << a * b << endl;

                break;
            case '%':
                cout << a % b << endl;

                break;
        }
    }


    return 0;
}