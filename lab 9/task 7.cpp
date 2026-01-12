#include <iostream>
using namespace std;

int main() {
    int mainMenu, subMenu;
    char choice;
    float qty, price = 0, total = 0;

    do {
        cout << "\n===== RESTAURANT MENU =====\n";
        cout << "1. Breakfast\n";
        cout << "2. Lunch\n";
        cout << "3. Dinner\n";
        cout << "Select Main Menu (1-3): ";
        cin >> mainMenu;

        switch (mainMenu) {

        case 1: // Breakfast
            cout << "\n--- Breakfast Menu ---\n";
            cout << "1. Anda Paratha (Rs.40)\n";
            cout << "2. Nan Channy (Rs.60)\n";
            cout << "3. Siri Paye (Rs.150)\n";
            cout << "4. Tea (Rs.15)\n";
            cout << "Select Item: ";
            cin >> subMenu;

            if (subMenu == 1) price = 40;
            else if (subMenu == 2) price = 60;
            else if (subMenu == 3) price = 150;
            else if (subMenu == 4) price = 15;
            else { cout << "Invalid Item!\n"; break; }

            cout << "Enter Quantity: ";
            cin >> qty;
            total += price * qty;
            break;

        case 2: // Lunch
            cout << "\n--- Lunch Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/KG)\n";
            cout << "2. Mutton Karahi (Rs.1800/KG)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "Select Item: ";
            cin >> subMenu;

            if (subMenu == 1) price = 1050;
            else if (subMenu == 2) price = 1800;
            else if (subMenu == 3) price = 450;
            else if (subMenu == 4) price = 1050;
            else { cout << "Invalid Item!\n"; break; }

            cout << "Enter Quantity: ";
            cin >> qty;
            total += price * qty;
            break;

        case 3: // Dinner
            cout << "\n--- Dinner Menu ---\n";
            cout << "1. Chicken Karahi (Rs.1050/KG)\n";
            cout << "2. Mutton Karahi (Rs.1800/KG)\n";
            cout << "3. Egg Fried Rice (Rs.450/plate)\n";
            cout << "4. BBQ (Rs.1050/dozen)\n";
            cout << "5. Saji (Rs.800/KG)\n";
            cout << "Select Item: ";
            cin >> subMenu;

            if (subMenu == 1) price = 1050;
            else if (subMenu == 2) price = 1800;
            else if (subMenu == 3) price = 450;
            else if (subMenu == 4) price = 1050;
            else if (subMenu == 5) price = 800;
            else { cout << "Invalid Item!\n"; break; }

            cout << "Enter Quantity: ";
            cin >> qty;
            total += price * qty;
            break;

        default:
            cout << "Invalid Main Menu Selection!\n";
        }

        cout << "\nDo you want to order more? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n============================\n";
    cout << "Total Bill = Rs. " << total << endl;
    cout << "Thank You for Ordering!\n";

    return 0;
}
