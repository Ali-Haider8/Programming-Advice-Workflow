// created by ali_h at 2026-07-25 13:47

#include <iostream>

using namespace std;

class clsPerson {
    // this private will not accessed from outside the class
    // for internal use only

    int x;

  public:
    string FirstName;
    string LastName;

    string FullName() {
        return FirstName + " " + LastName;
    }
};

int main() {

    clsPerson Person1;

    Person1.FirstName = "Ali";
    Person1.LastName = "Nukhailawi";

    cout << Person1.FullName() << endl;
    string S1;

    return 0;
}