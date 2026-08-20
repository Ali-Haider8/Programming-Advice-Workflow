// created by ali_h at 2026-08-20 13:03

#include <iostream>

using namespace std;

class clsEmployee {
  private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    float _Salary;
    string _Department;

  public:
    clsEmployee(int ID,
                string FirstName,
                string LastName,
                string Title,
                string Email,
                string Phone,
                float Salary,
                string Department) {
        _ID = ID;
        _Title = Title;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;
    }

    // Property Get
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
    void setTitle(string Title) {
        _Title = Title;
    }

    // Property Get
    string Title() {
        return _Title;
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

    void SendEmail(string Subject, string Body) {
        cout << "Sending Email to: " << _Email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    void SendSMS(string Body) {
        cout << "Sending message to: " << _Phone << endl;
        cout << "Body: " << Body << endl;
    }

    string FullName() {
        return _FirstName + " " + _LastName;
    }
};

class clsDeveloper : clsEmployee {
  private:
    string _Title;
    string _Department;
    float _Salary;
    string _MainProgrammingLanguage;

  public:
    clsDeveloper(
        int ID,
        string FirstName,
        string LastName,
        string Title,
        string Email,
        string Phone,
        float Salary,
        string Department, string MainProgrammingLanguage)
        : clsEmployee(
              ID,
              FirstName,
              LastName,
              Title,
              Email,
              Phone,
              Salary,
              Department) {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
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
        cout << "Main Programming Language: " << MainProgrammingLanguage() << endl;
        cout << "______________________" << endl;
        cout << "\n";
    }
};

int main() {

    clsDeveloper Dev1(10, "Ali", "Nukhailawi", "Student", "ali@gmail.com", "078516519", 433.4, "IT", "Java");
    Dev1.Print();
    system("pause>0");
    return 0;
}