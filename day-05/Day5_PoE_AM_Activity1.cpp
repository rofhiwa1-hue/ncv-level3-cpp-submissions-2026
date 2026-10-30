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

        if (name.empty()) {
            throw invalid_argument("Error: Product name cannot be empty.");
        }
        if (p < 0) {
            throw invalid_argument("Error: Price cannot be negative.");
        }
        if (quantity < 0) {
            throw invalid_argument("Error: Quantity in stock cannot be negative.");
        }
        productCode = code;
        productName = name;
        price = p;
        quantityInStock = quantity;
    }

    string getProductCode() const {
        return productCode;
    }

    string getProductName() const {
        return productName;
    }

    double getPrice() const {
        return price;
    }

    int getQuantityInStock() const {
        return quantityInStock;
    }
};


int main() {

    Product myProduct;


    cout << "--- Test 1 ---" << endl;
    try {

        myProduct.setProductDetails("P101", "Wireless Mouse", 249.99, 15);

        cout << "Product Code: " << myProduct.getProductCode() << endl;
        cout << "Product Name: " << myProduct.getProductName() << endl;
        cout << "Price: R" << myProduct.getPrice() << endl;
        cout << "Quantity in Stock: " << myProduct.getQuantityInStock() << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    cout << "\n--- Test 2 ---" << endl;

    try {

        myProduct.setProductDetails("P102", "Mechanical Keyboard", 850.00, 5);


        cout << "Product Code: " << myProduct.getProductCode() << endl;
        cout << "Product Name: " << myProduct.getProductName() << endl;
        cout << "Price: R" << myProduct.getPrice() << endl;
        cout << "Quantity in Stock: " << myProduct.getQuantityInStock() << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
