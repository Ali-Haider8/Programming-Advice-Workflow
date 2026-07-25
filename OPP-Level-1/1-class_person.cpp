// created by ali_h at 2026-07-24 17:17

#include <iostream>

using namespace std;

class clsPerson {
  private:
    // only accessable inside this class
    int Variable1 = 5;
    int Function1() {
        return 40;
    }

    // int x;

  protected:
    // only accessable inside this class and all classes inhirets this class
    int Variable2 = 100;
    int Function2() {
        return 50;
    }

  public:
    // accessable for everyone outside/inside/and classes inherits this class
    string FirstName; // data member
    string LastName;  // data member

    string FullName() { // member method
        return FirstName + " " + LastName;
    }

    float Function3() {
        return Function1() * Variable1 + Variable2;
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
    cout << Person1.Function3() << endl;

    return 0;
}