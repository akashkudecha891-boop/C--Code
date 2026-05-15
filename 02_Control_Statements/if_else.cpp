#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    if(number > 0)
        cout << "Positive Number";
    else if(number < 0)
        cout << "Negative Number";
    else
        cout << "Zero";

    return 0;
}
