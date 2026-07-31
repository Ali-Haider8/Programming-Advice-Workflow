// created by ali_h at 2026-07-31 21:38

#include <iostream>
#include <string>
using namespace std;

class clsA {
    public:
    int var;
    static int counter;

    clsA() {
        counter++;
    }

    void Print() {
        cout << "\nvar: " << var << endl;
        cout << "counter: " << counter << endl;
    }
};

int clsA::counter = 0; // static variable initialisation outside the class


int main() {

    clsA A1, A2, A3;

    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    A1.Print();
    A2.Print();
    A3.Print();

    A1.counter = 500;

    cout << "\nAfter changing the static member counter in one object: \n";

    A1.Print();
    A2.Print();
    A3.Print();

    

    return 0;
}