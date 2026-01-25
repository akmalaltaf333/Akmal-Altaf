#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// Function prototypes
void displayMenu();
double calculateItemCost(double price, int quantity);
double calculateFinalBill(double subtotal, double taxRate = 0.10);
void displayBillSummary(const vector<string>& items, const vector<int>& quantities, 
                       const vector<double>& costs, double subtotal, double tax, double total);

int main() {
    vector<string> orderedItems;
    vector<int> quantities;
    vector<double> itemCosts;
    
    int choice;
    int quantity;
    double price = 0.0;
    string itemName;
    double subtotal = 0.0;
    
    cout << "=========================================\n";
    cout << "      WELCOME TO AWESOME RESTAURANT     \n";
    cout << "=========================================\n\n";
    
    do {
        displayMenu();
        
        cout << "\nEnter item number (1-5) to order, or 0 to finish: ";
        cin >> choice;
        
        if (choice == 0) {
            break;
        }
        
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice! Please select 1-5 or 0 to finish.\n";
            continue;
        }
        
        // Determine item and price based on choice
        switch(choice) {
            case 1:
                itemName = "Burger";
                price = 5.99;
                break;
            case 2:
                itemName = "Pizza";
                price = 8.99;
                break;
            case 3:
                itemName = "Pasta";
                price = 7.49;
                break;
            case 4:
                itemName = "Salad";
                price = 4.99;
                break;
            case 5:
                itemName = "Drink";
                price = 1.99;
                break;
        }
        
        cout << "Enter quantity for " << itemName << ": ";
        cin >> quantity;
        
        if (quantity <= 0) {
            cout << "Quantity must be positive! Try again.\n";
            continue;
        }
        
        // Calculate cost for this item
        double cost = calculateItemCost(price, quantity);
        
        // Store order details
        orderedItems.push_back(itemName);
        quantities.push_back(quantity);
        itemCosts.push_back(cost);
        
        // Update subtotal
        subtotal += cost;
        
        cout << fixed << setprecision(2);
        cout << "Added: " << quantity << " x " << itemName << " = $" << cost << endl;
        cout << "Current subtotal: $" << subtotal << "\n\n";
        
    } while (choice != 0);
    
    // Check if any items were ordered
    if (orderedItems.empty()) {
        cout << "\nNo items ordered. Thank you for visiting!\n";
        return 0;
    }
    
    // Calculate final bill with tax
    double tax = calculateFinalBill(subtotal) - subtotal;
    double total = calculateFinalBill(subtotal);
    
    // Display final bill summary
    displayBillSummary(orderedItems, quantities, itemCosts, subtotal, tax, total);
    
    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "========== MENU ==========\n";
    cout << "1. Burger         $5.99\n";
    cout << "2. Pizza          $8.99\n";
    cout << "3. Pasta          $7.49\n";
    cout << "4. Salad          $4.99\n";
    cout << "5. Drink          $1.99\n";
    cout << "==========================\n";
}

// Function to calculate cost of an item
double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax/service charge
double calculateFinalBill(double subtotal, double taxRate) {
    return subtotal + (subtotal * taxRate);
}

// Function to display the bill summary
void displayBillSummary(const vector<string>& items, const vector<int>& quantities, 
                       const vector<double>& costs, double subtotal, double tax, double total) {
    
    cout << fixed << setprecision(2);
    cout << "\n=========================================\n";
    cout << "            FINAL BILL SUMMARY          \n";
    cout << "=========================================\n";
    cout << left << setw(20) << "ITEM" 
         << right << setw(8) << "QTY" 
         << setw(12) << "COST" << endl;
    cout << "-----------------------------------------\n";
    
    for (size_t i = 0; i < items.size(); i++) {
        cout << left << setw(20) << items[i]
             << right << setw(8) << quantities[i]
             << setw(12) << costs[i] << endl;
    }
    
    cout << "=========================================\n";
    cout << left << setw(28) << "Subtotal:" 
         << right << "$" << setw(11) << subtotal << endl;
    cout << left << setw(28) << "Service Charge/Tax (10%):" 
         << right << "$" << setw(11) << tax << endl;
    cout << left << setw(28) << "TOTAL AMOUNT:" 
         << right << "$" << setw(11) << total << endl;
    cout << "=========================================\n";
    cout << "\nThank you for dining with us!\n";
}
