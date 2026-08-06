// created by ali_h at 2026-08-04 21:08

#include <iostream>

using namespace std;

class clsEmployee {
  private:
    int _ID;
    string _FirstName;
    string _LastName; // 
    string _Title;
    string _Email;
    string _Phone;
    string _Salary;
    string _Department;

  public:
    clsEmployee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, string Salary, string Department) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;
    }

    // Read only Property
    int ID() {
        return _ID;
    }

    // Set Property
    void setFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    // Get Property
    string FirstName() {
        return _FirstName;
    }

    // Set Property
    void setLastName(string LastName) {
        _LastName = LastName;
    }

    // Get Property
    string LastName() {
        return _LastName;
    }

    string FullName() {
        return (_FirstName + " " + _LastName);
    }

    // Set Property
    void setTitle(string Title) {
        _Title = Title;
    }

    // Get Property
    string Title() {
        return _Title;
    }

    // Set Property
    void setEmail(string Email) {
        _Email = Email;
    }

    // Get Property
    string Email() {
        return _Email;
    }

    // Set Property
    void setPhone(string Phone) {
        _Phone = Phone;
    }

    // Get Property
    string Phone() {
        return _Phone;
    }

    // Set Property
    void setSalary(string Salary) {
        _Salary = Salary;
    }

    // Get Property
    string Salary() {
        return _Salary;
    }

    // Set Property
    void setDepartment(string Department) {
        _Department = Department;
    }

    // Get Property
    string Department() {
        return _Department;
    }

    void Print() {
        cout << "Info: " << endl;
        cout << "______________________" << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName: " << _LastName << endl;
        cout << "FullName: " << FullName() << endl;
        cout << "Title: " << _Title << endl;
        cout << "Email: " << _Email << endl;
        cout << "Phone: " << _Phone << endl;
        cout << "Salary: " << _Salary << endl;
        cout << "Department: " << _Department << endl;
        cout << "______________________" << endl;
        cout << "\n";
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

    clsEmployee Employee1(00, "Ali", "Nukhailawi", "Student", "ali@gmail.com", "964775531236", "$600", "IT");
    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("Hi " + Employee1.FullName());

    system("pause>0");
    return 0;
}