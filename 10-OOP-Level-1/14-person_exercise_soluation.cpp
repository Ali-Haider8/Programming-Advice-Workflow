// created by ali_h at 2026-08-04 19:08

#include <iostream>

using namespace std;

class clsPerson {
  private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

  public:
    // constructor
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Read Only Property
    int ID() {
        return _ID;
    }

    // Property Set
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    // Property Get
    string FirstName() {
        return _FirstName;
    }

    // Property Set
    void setLastName(string LastName) {
        _LastName = LastName;
    }

    // Property Get
    string LastName() {
        return _LastName;
    }

    // Property Set
    void setEmail(string Email) {
        _Email = Email;
    }

    // Property Get
    string Email() {
        return _Email;
    }

    // Property Set
    void setPhone(string Phone) {
        _Phone = Phone;
    }

    // Property Get
    string Phone() {
        return _Phone;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }

    void Print() {
        // cout << "\n";
        cout << "___________________" << endl;
        cout << "ID: " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName: " << _LastName << endl;
        cout << "FullName: " << FullName() << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _Phone << endl;
        cout << "___________________" << endl;
        cout << "\n ";
    }

    void SendEmail(string Subject, string Body) {
        cout << "\n";
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
        cout << "\n";
    }

    void SendSMS(string TextMessage) {
        cout << "\n";
        cout << "The following SMS sent successfully to phone: " << _Phone << endl;
        cout << TextMessage << endl;
        cout << "\n";
    }
};

int main() {

    clsPerson Person1(10, "Ali", "Nukhailawi", "ali@gmail.com", "0787648624");
    Person1.Print();

    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}