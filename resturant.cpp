#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Food class
class Food {
private:
    int ID;
    string name;
    int price;

public:
    Food() : ID(0), price(0) {}

    Food(int i, const string& n, int p) {
        setID(i);
        setName(n);
        setPrice(p);
    }
  // Setters
    void setID(int i) { ID = i; }
    void setName(const string& n) { name = n; }
    void setPrice(int p) { price = p; }

 // Getters
    int getID() const { return ID; }
    string getName() const { return name; }
    int getPrice() const { return price; }

    // Print food
    void print() const {
        cout << ID << ", " << name << ", " << price << " Toman" << endl;
    }
};