// created by ali_h at 2026-08-20 12:56

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
    // we put default constructor here temporarily because inheritance will use it
    // in the coming lectures we will solve the parmtaired constructor with inheritance.

    clsPerson() {
    }
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Read only Property
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

    string FullName() {
        return (_FirstName + " " + _LastName);
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

    void Print() {
        cout << "\n";
        cout << "Info: " << endl;
        cout << "______________________" << endl;
        cout << "ID: " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName: " << _LastName << endl;
        cout << "FullName: " << FullName() << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _Phone << endl;
        cout << "______________________" << endl;
        cout << "\n";
    }

    void SendEmail(string Subject, string Body) {
        cout << "Sending Email to: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    void SendSMS(string Body) {
        cout << "Sending SMS to: " << _Phone << endl;
        cout << "Body: " << Body << endl;
    }
};

class clsEmployee : public clsPerson {
  private:
    string _Title;
    string _Department;
    float _Salary;

  public:
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone) {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    // Property Set
    void setTitle(string Title) {
        _Title = Title;
    }

    // Property Get
    string Title() {
        return _Title;
    }

    // Property Set
    void setDepartment(string Department) {
        _Department = Department;
    }

    // Property Get
    string Department() {
        return _Department;
    }

    // Property Set
    void setSalary(float Salary) {
        _Salary = Salary;
    }

    // Property Get
    float Salary() {
        return _Salary;
    }

    void Print() {
        cout << "\n";
        cout << "Info: " << endl;
        cout << "______________________" << endl;
        cout << "ID: " << ID() << endl;
        cout << "FirstName: " << FirstName() << endl;
        cout << "LastName: " << LastName() << endl;
        cout << "FullName: " << FullName() << endl;
        cout << "Email: " << Email() << endl;
        cout << "Phone: " << Phone() << endl;
        cout << "Title: " << Title() << endl;
        cout << "Department: " << Department() << endl;
        cout << "Salary: " << Salary() << endl;
        cout << "______________________" << endl;
        cout << "\n";
    }
};

int main() {

    clsEmployee Employee1(10, "Ali", "Hassan", "ali@gmail.com", "078651625", "Student", "IT", 2354.5);
    Employee1.Print();

    system("pause>0");
    return 0;
}