#include "queue.h"
#include "queue.cpp"
#include <iostream>
using namespace std;

int main(){

    queue<int> r1;

    cout << r1.isEmpty() << endl;

    r1.enqueue(5);
    cout << r1.isEmpty() << endl;

    r1.dequeue();
    cout << r1.isEmpty() << endl;



    return 0;
}
