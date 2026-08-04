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
    clsPerson(int ID, string FirstName, string LastName, string Email, long PhoneNumber) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    }

    void SetID(int ID) {
        _ID = ID;
    }

    int ID() {
        return _ID;
    }

    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    string FirstName() {
        return _LastName;
    }

    void setLastName(string LastName) {
        _LastName = LastName;
    }

    string LastName() {
        return _LastName;
    }

    void setEmail(string Email) {
        _Email = Email;
    }

    string Email() {
        return _Email;
    }

    string FullName() {
        return (_FirstName + " " + _LastName);
    }

    void setPhoneNumber(int PhoneNumber) {
        _PhoneNumber = PhoneNumber;
    }

    int PhoneNumber() {
        return _PhoneNumber;
    }

    void SendEmail(string subject, string body) {
        cout << "\n";
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    void SendSMS(string message) {
        cout << "\n";
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << message;
        cout << "\n";
    }

    void Print() {
        cout << "Info:" << endl;
        cout << "______________________________" << endl;
        cout << "ID: " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName: " << _LastName << endl;
        cout << "Full Name: " << _FirstName << " " << _LastName << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _PhoneNumber << endl;
        cout << "______________________________" << endl;
        cout << "\n";
    }
};

int main() {

    clsPerson Person1(10, "Ali", "Nukhailawi", "ali@gmail.com",9647840071715);
    Person1.Print();

    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}