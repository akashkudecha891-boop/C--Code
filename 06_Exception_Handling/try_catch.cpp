#include <iostream>
using namespace std;

int main() {
    try {
        int age = -5;

        if(age < 0)
            throw age;

        cout << "Age: " << age;
    }
    catch(int x) {
        cout << "Exception Caught: Invalid age";
    }

    return 0;
}
