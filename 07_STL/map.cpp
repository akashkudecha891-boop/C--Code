#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> student;

    student[1] = "Ali";
    student[2] = "Ahmed";

    cout << student[1] << endl;
    cout << student[2];

    return 0;
}
