#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


class Product {
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:

    Product() {
        productCode = "";
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    void setProductDetails(string code, string name, double p, int quantity) {
        if (name.empty()) throw invalid_argument("Error: Product name cannot be empty.");
        if (p < 0) throw invalid_argument("Error: Price cannot be negative.");
        if (quantity < 0) throw invalid_argument("Error: Quantity cannot be negative.");

        productCode = code;
        productName = name;
        price = p;
        quantityInStock = quantity;
    }

        string getProductCode() const { return productCode; }
    string getProductName() const { return productName; }
    double getPrice() const { return price; }
    int getQuantityInStock() const { return quantityInStock; }
};


void GetProductData(Product& p) {
    string code, name;
    double price;
    int quantity;

    cout << "\nEnter Product Code: ";
    cin >> code;
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Price (R): ";
    cin >> price;
    cout << "Enter Quantity in Stock: ";
    cin >> quantity;

    try {
        p.setProductDetails(code, name, price, quantity);
    } catch (const exception& e) {
        cout << e.what() << " (Product data not saved correctly)" << endl;
    }
}


void DisplayProduct(const Product& p) {
    cout << "---------------------------" << endl;
    cout << "Product Code: " << p.getProductCode() << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << p.getPrice() << endl;
    cout << "Quantity in Stock: " << p.getQuantityInStock() << endl;
    cout << "---------------------------" << endl;
}


void prodCompare(const Product& p1, const Product& p2) {

    if (!p1.getProductName().empty() && !p2.getProductName().empty()) {


        char char1 = p1.getProductName().at(0);
        char char2 = p2.getProductName().at(0);


        if (toupper(char1) == toupper(char2)) {
            cout << "\nComparison: The two product names DO start with the same character ('" << char1 << "')." << endl;
        } else {
            cout << "\nComparison: The two product names DO NOT start with the same character ('" << char1 << "' vs '" << char2 << "')." << endl;
        }
    } else {
        cout << "\nComparison: Cannot compare. One or both product names are empty." << endl;
    }
}

int main() {
    cout << "--- Testing PoE Task ---" << endl;

    Product product1;
    Product product2;

    cout << "--- Enter Data for Product 1 ---";
    GetProductData(product1);

    cout << "\n--- Enter Data for Product 2 ---";
    GetProductData(product2);


    cout << "\n--- Displaying Products ---";
    DisplayProduct(product1);
    DisplayProduct(product2);


    prodCompare(product1, product2);

    return 0;
}
