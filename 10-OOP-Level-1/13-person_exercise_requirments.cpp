// created by ali_h at 2026-08-02 17:36

#include <iostream>

using namespace std;

class clsPerson {
  private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    int _PhoneNumber;

  public:
    clsPerson(int ID, string FirstName, string LastName, string Email, int PhoneNumber) {
        ID = _ID;
        FirstName = _FirstName;
        LastName = _LastName;
        Email = _Email;
        PhoneNumber = _PhoneNumber;
    }

    void SetID(int ID) {
        _ID= ID;
    }

    int ID(){
        return _ID;
    }

    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    void setLastName(string LastName) {
        
    }



    void Print() {
        cout << "Info" << endl;
        cout << "ID: " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName: " << _LastName << endl;
        cout << "Full Name: " << _FullName << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _PhoneNumber << endl;
    }
};

int main() {

    clsPerson Person1(10, "Ali", "Nukhailawi", "ali@gmail.com", 123);
    Person1.Print();

    return 0;
}