#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product
{
public:
    string name;
    double price;
    int quantity;

    Product(string name, double price, int quantity)
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
};

// Calculate total inventory value
double calculateInventoryValue(vector<Product> products)
{
    double totalValue = 0.0;
    for (Product product : products)
    {
        totalValue += product.price * product.quantity;
    }
    return totalValue;
}

// Find the most expensive product
Product findMostExpensiveProduct(vector<Product> products)
{
    Product mostExpensive = products[0];
    for (Product product : products)
    {
        if (product.price > mostExpensive.price)
        {
            mostExpensive = product;
        }
    }
    return mostExpensive;
}

// Check if product named "Headphones" is in stock
bool isProductInStock(vector<Product> products, string productName)
{
    for (Product product : products)
    {
        if (product.name == productName)
        {
            return true;
        }
    }
    return false;
}

// Sort products in descending order by price
void sortProductsDescending(vector<Product> &products)
{
    for (int i = 0; i < products.size() - 1; i++)
    {
        for (int j = i + 1; j < products.size(); j++)
        {
            if (products[i].price < products[j].price)
            {
                swap(products[i], products[j]);
            }
        }
    }
}

// Sort products in ascending order by price
void sortProductsAscending(vector<Product> &products)
{
    for (int i = 0; i < products.size() - 1; i++)
    {
        for (int j = i + 1; j < products.size(); j++)
        {
            if (products[i].price > products[j].price)
            {
                swap(products[i], products[j]);
            }
        }
    }
}

// Sort products in descending order by quantity
void sortProductsDescendingByQuantity(vector<Product> &products)
{
    for (int i = 0; i < products.size() - 1; i++)
    {
        for (int j = i + 1; j < products.size(); j++)
        {
            if (products[i].quantity < products[j].quantity)
            {
                swap(products[i], products[j]);
            }
        }
    }
}

// Sort products in ascending order by quantity
void sortProductsAscendingByQuantity(vector<Product> &products)
{
    for (int i = 0; i < products.size() - 1; i++)
    {
        for (int j = i + 1; j < products.size(); j++)
        {
            if (products[i].quantity > products[j].quantity)
            {
                swap(products[i], products[j]);
            }
        }
    }
}

int main()
{
    // Create a vector of Product objects
    vector<Product> products = {
        {"Laptop", 999.99, 5},
        {"Smartphone", 499.99, 10},
        {"Tablet", 299.99, 0},
        {"Smartwatch", 199.99, 3}};

    // List all products
    cout << "Product List:" << endl;
    for (Product product : products)
    {
        cout << product.name << ": price " << product.price
             << ", quantity " << product.quantity << endl;
    }
    cout << endl; // Add an extra newline for better readability

    // Calculate total inventory value
    double totalValue = calculateInventoryValue(products);
    cout << "Total inventory value: " << totalValue << endl;

    cout << endl;

    // Find the most expensive product
    Product mostExpensiveProduct = findMostExpensiveProduct(products);
    cout << "The most expensive product is: " << mostExpensiveProduct.name << endl;

    cout << endl;

    // Check if "Headphones" is in stock
    string productName = "Headphones";
    bool isInStock = isProductInStock(products, productName);
    cout << "Headphones in stock: " << boolalpha << isInStock << endl;

    cout << endl;

    // Sort products by price in descending order
    sortProductsDescending(products);
    cout << "Sorted products by price in descending order:" << endl;
    for (Product product : products)
    {
        cout << product.name << " - $" << product.price << endl;
    }

    cout << endl;

    // Sort products by price in ascending order
    sortProductsAscending(products);
    cout << "Sorted products by price in ascending order:" << endl;
    for (Product product : products)
    {
        cout << product.name << " - $" << product.price << endl;
    }

    cout << endl;

    // Sort products in descending order by quantity
    sortProductsDescendingByQuantity(products);
    cout << "Sorted products by quantity in descending order:" << endl;
    for (Product product : products)
    {
        cout << product.name << " - Quantity: " << product.quantity << endl;
    }

    cout << endl;

    // Sort products in ascending order by quantity
    sortProductsAscendingByQuantity(products);
    cout << "Sorted products by quantity in ascending order:" << endl;
    for (Product product : products)
    {
        cout << product.name << " - Quantity: " << product.quantity << endl;
    }

    cout << endl;

    return 0;
}