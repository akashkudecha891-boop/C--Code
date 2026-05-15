#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(15);
    cout << q.front() << endl;
    q.pop();
    cout << q.front();
    return 0;
}
