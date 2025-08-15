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
        void print() const {
        cout << ID << ", " << name << ", " << price << " Toman" << endl;
    }
};
// Global menu vector
vector<Food> menu;

// Read menu from file
void readMenuFromFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Unable to open file: " << filename << endl;
        return;
    }
    menu.clear();

    int id, price;
    string name;
    while (file >> id >> name >> price) {
        menu.emplace_back(id, name, price);
    }
    file.close();
}
// Find food by ID
int findFoodByID(int id) {
    for (size_t i = 0; i < menu.size(); ++i) {
        if (menu[i].getID() == id)
            return i;
    }
    return -1;
}
// Show full menu
void showMenu() {
    cout << "ID\tName\tPrice" << endl;
    for (const auto& f : menu) {
        cout << f.getID() << "\t" << f.getName() << "\t" << f.getPrice() << endl;
    }
}