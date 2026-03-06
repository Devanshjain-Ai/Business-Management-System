#include<bits/stdc++.h>

using namespace std;


struct Product {
    string name;
    double price;
    int stock;
};


vector<Product> inventory;

void addProduct() {
    Product p;
    cout << "Enter Product Name: ";
    cin.ignore(); // Clear buffer
    getline(cin, p.name);
    cout << "Enter Price: ";
    cin >> p.price;
    cout << "Enter Stock Quantity: ";
    cin >> p.stock;
    
    inventory.push_back(p);
    cout << "\nProduct added successfully!\n";
}

void viewInventory() {
    cout << "\n Current Inventory Status \n";
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }
    for (const auto& item : inventory) {
        cout << "Item: " << item.name << " | Price: " << item.price 
             << " | Stock: " << item.stock << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nBusiness Management System (Phase A)\n";
        cout << "1. Add Product\n2. View Inventory\n3. Exit\n";
        cout << "Select Option: ";
        cin >> choice;

        if (choice == 1) addProduct();
        else if (choice == 2) viewInventory();
        else if (choice == 3) break;
        else cout << "Invalid choice!\n";
    }
    return 0;
}