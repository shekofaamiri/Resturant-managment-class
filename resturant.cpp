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
