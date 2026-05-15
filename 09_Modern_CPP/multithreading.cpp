#include <iostream>
#include <thread>
using namespace std;

void display() {
    cout << "Thread Running";
}

int main() {
    thread t(display);
    t.join();

    return 0;
}
