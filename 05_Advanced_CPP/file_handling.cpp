#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");

    file << "Learning File Handling in C++";
    file.close();

    cout << "File created successfully";

    return 0;
}
