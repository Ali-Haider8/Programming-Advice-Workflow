// created by ali_h at 2026-08-20 14:37

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
    float _Salary;
    string _Department;

  public:
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, float Salary, string Department) : clsPerson(ID, FirstName, LastName, Email, Phone) {
        _Title = Title;
        _Salary = Salary;
        _Department = Department;
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
    void setSalary(float Salary) {
        _Salary = Salary;
    }

    // Property Get
    float Salary() {
        return _Salary;
    }

    // Property Set
    void setDepartment(string Department) {
        _Department = Department;
    }

    // Property Get
    string Department() {
        return _Department;
    }

    // Overloading function
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
        cout << "Salary: " << Salary() << endl;
        cout << "Department: " << Department() << endl;
        cout << "______________________" << endl;
        cout << "\n";
    }
};

class clsDeveloper : public clsEmployee {
  private:
    string _MainProgrammingLanguage;

  public:
    clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title, float Salary, string Department, string MainProgrammingLanguage) : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Salary, Department) {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    // Property Set
    void setMainProgrammingLanguage(string MainProgrammingLanguage) {
        _MainProgrammingLanguage = MainProgrammingLanguage;
    }

    // Property Get
    string MainProgrammingLanguage() {
        return _MainProgrammingLanguage;
    }

    // Overloading function
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
        cout << "Salary: " << Salary() << endl;
        cout << "Department: " << Department() << endl;
        cout << "Programming Language: " << MainProgrammingLanguage() << endl;
        cout << "______________________" << endl;
        cout << "\n";
    }
};

int main() {
    clsDeveloper Developer1(10, "Ali", "Nukhailawi", "ali@gmail.com", "0781561321", "Joiner Developer", 5423.3, "IT", "Java");
    Developer1.Print();
    Developer1.SendSMS("Hi there");

    system("pause>0");
    return 0;
}