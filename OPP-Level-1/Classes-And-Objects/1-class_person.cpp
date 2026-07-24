// created by ali_h at 2026-07-24 17:17

#include <iostream>

using namespace std;

class clsPerson {
    int x;

  public:
    string FirstName; // data member
    string LastName;  // data member

    string FullName() { // member method
        return FirstName + " " + LastName;
    }
};

int main() {

    clsPerson Person1, Person2;

    Person1.FirstName = "Ali";
    Person1.LastName = "Nukhailawi";

    Person2.FirstName = "Ahmed";
    Person2.LastName = "Hadi";

    cout << Person1.FullName() << endl;
    cout << Person2.FullName() << endl;

    return 0;
}