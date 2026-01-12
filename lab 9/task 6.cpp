#include <iostream>
using namespace std;

int main() {
    int password;
    int correctPassword = 1234;

    do {
        cout << "Enter Password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Wrong password! Try again.\n";
        }

    } while (password != correctPassword);

    cout << "Access Granted!";
    return 0;
}
