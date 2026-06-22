#include <iostream>
#include <string>
using namespace std;

// Write a program to Create Inventory Management System

class Item {
public:
    int itemID;
    string name;
    int quantity;
    float price;
};

int main() {
    Item it[100];
    int n = 0, choice, id;
    bool found;
    int qty;
    float price;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Update Quantity\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Item ID: ";
            cin >> it[n].itemID;

            cout << "Enter Item Name: ";
            cin >> it[n].name;

            cout << "Enter Quantity: ";
            cin >> it[n].quantity;

            cout << "Enter Price: ";
            cin >> it[n].price;

            n++;
            cout << "Item Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No inventory records available.\n";
            } else {
                cout << "\nInventory Items:\n";
                cout << "ID\tName\tQty\tPrice\n";

                for (int i = 0; i < n; i++) {
                    cout << it[i].itemID << "\t"
                         << it[i].name << "\t"
                         << it[i].quantity << "\t"
                         << it[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Item ID to Search: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (it[i].itemID == id) {
                    cout << "\nItem Found:\n";
                    cout << "ID: " << it[i].itemID << endl;
                    cout << "Name: " << it[i].name << endl;
                    cout << "Quantity: " << it[i].quantity << endl;
                    cout << "Price: " << it[i].price << endl;

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item Not Found.\n";
            }
            break;

        case 4:
            cout << "Enter Item ID to Update Quantity: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (it[i].itemID == id) {
                    cout << "Enter New Quantity: ";
                    cin >> qty;

                    it[i].quantity = qty;
                    cout << "Quantity Updated Successfully!\n";

                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item Not Found.\n";
            }
            break;

        case 5:
            cout << "Enter Item ID to Delete: ";
            cin >> id;

            found = false;

            for (int i = 0; i < n; i++) {
                if (it[i].itemID == id) {
                    for (int j = i; j < n - 1; j++) {
                        it[j] = it[j + 1];
                    }
                    n--;

                    cout << "Item Deleted Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item Not Found.\n";
            }
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}