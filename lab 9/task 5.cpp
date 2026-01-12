#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000, amount;

    while (true) {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
        }
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance) {
                balance -= amount;
                cout << "Withdraw Successful!\n";
            } else {
                cout << "Insufficient Balance!\n";
            }
        }
        else if (choice == 3) {
            cout << "Current Balance: Rs." << balance << endl;
        }
        else if (choice == 4) {
            cout << "Thank you! Program Ended.";
            break;
        }
        else {
            cout << "Invalid Choice! Try again.\n";
        }
    }

    return 0;
}
