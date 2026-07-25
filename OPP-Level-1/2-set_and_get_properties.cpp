// created by ali_h at 2026-07-25 12:52

#include <iostream>

using namespace std;

class clsPerson {
  private:
    string _FirstName;
    string _LastName;

  public:
    // Property Set
    void setFirstName(string FirstName) {
        // write code to save old values
        _FirstName = FirstName;
    }

    // Property Get
    string FirstName() {
        return _FirstName;
    }

    void setLastName(string LastName) {
        _LastName = LastName;
    }

    // Property Get
    string LastName() {
        return _LastName;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }
};

int main() {

    clsPerson Person1;

    Person1.setFirstName("Ali");
    Person1.setLastName("Nukhailawi");

    cout << "First Name: " << Person1.FirstName() << endl;
    cout << "Last Name: " << Person1.LastName() << endl;
    cout << "Full Name: " << Person1.FullName() << endl;

    // system("pause>0");

    return 0;
}