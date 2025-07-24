#include<iostream>
using namespace std;
class Product {
    public:
    string name;
    double price;
    int quantity;
    public:
    void getdata(string x, double y, int z) {
        name = x;
        price = y;
        quantity = z;
    }
    double calculateCost() {
        double totalCost = price * quantity;
        return totalCost;
    }
};
class Electronics : public Product {
    public:
    double calculateElecCost() {
        double cost = calculateCost();
        if(quantity >= 3) {
            return cost * 0.90;
        }
        return cost;
    }
};
class Clothing : public Product {
    public:
    double calculateClothCost() {
        double cost = calculateCost();
        if(quantity >= 5) {
            return cost * 0.95;
        }
        return cost;
    }
};
class OrderCalculator : public Electronics, public Clothing {
    public:
    Electronics Laptop;
    Clothing Shirt;
    void setElectronics(string name, double price, int qty) {
        Laptop.getdata(name, price, qty);
    }
    void setClothing(string name, double price, int qty) {
        Shirt.getdata(name, price, qty);
    }
    double calculateTotalCost() {
        return Laptop.calculateElecCost() + Shirt.calculateClothCost();
    }
};
int main() {
    OrderCalculator o1;
    o1.setElectronics("Dell", 12000.0, 5);
    o1.setClothing("Denim", 25.0, 7);
    cout << "Laptop cost: " << o1.Laptop.calculateElecCost() << endl;
    cout << "Shirt cost: " << o1.Shirt.calculateClothCost() << endl;
    cout << "Total Order cost: " << o1.calculateTotalCost() << endl;
}