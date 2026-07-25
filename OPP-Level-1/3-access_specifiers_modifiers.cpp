// created by ali_h at 2026-07-25 13:36

#include <iostream>

using namespace std;

class clsPerson {

  private:
    // only accessible inside this class
    int Variable1 = 5;

    int Function1() {
        return 40;
    }

  protected:
    // only accessible inside this
    // class and all classes inherits this class

    int Variable2 = 100;
    int Function2() {
        return 50;
    }

  public:
    // accessible for everyone outside / inside / and classes inherits this class
    string FirstName;
    string LastName;

    string FullName() {
        return FirstName + " " + LastName;
    }

    float Function3() {
        return Function1() * Variable1 * Variable2;
    }
};

int main() {

    clsPerson Person1;

    Person1.FirstName = "Ali";
    Person1.LastName = "Nukhailawi";

    cout << "Person1: " << Person1.FullName() << endl;
    cout << Person1.Function3();

    return 0;
}