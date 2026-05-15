#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    Car(string b) {
        brand = b;
    }

    void display() {
        cout << "Brand: " << brand;
    }
};

int main() {
    Car c1("Toyota");
    c1.display();

    return 0;
}
