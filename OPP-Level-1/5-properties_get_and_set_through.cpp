// created by ali_h at 2026-07-26 21:57

#include <iostream>

using namespace std;

class clsPerson {
  private:
    string _FirstName;

  public:
    void SetFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    string GetFirstName() {
        return _FirstName;
    }

    __declspec(property(get = GetFirstName, put = SetFirstName))
    string FirstName;
};

int main() {
    clsPerson Person1;

    Person1.SetFirstName("Mohammed");
    cout << Person1.GetFirstName() << endl;

    // instead of the above we only write this
    Person1.FirstName = "Mohammed"; // Set
    cout << Person1.FirstName;      // Get

    system("pause>0");
    return 0;
}