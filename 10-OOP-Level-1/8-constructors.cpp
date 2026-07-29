// created by ali_h at 2026-07-29 18:34

#include <iostream>

using namespace std;

class clsAddress {

  private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

  public:
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZIPcode) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZIPcode;
    }

    void SetAddressLine1(string AddressLine1) {
        _AddressLine1 = AddressLine1;
    }

    string AddressLine1() {
        return _AddressLine1;
    }

    void SetAddressLine2(string AddressLine2) {
        _AddressLine2 = AddressLine2;
    }

    string AddressLine2() {
        return _AddressLine2;
    }

    void SetPOBox(string POBox) {
        _POBox = POBox;
    }

    string POBox() {
        return _POBox;
    }

    void SetZipCode(string ZipCode) {
        _ZipCode = ZipCode;
    }

    string ZipCode() {
        return _ZipCode;
    }

    void Print() {
        cout << "Address Details:\n";
        cout << "----------------\n";
        cout << "AddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLine2: " << _AddressLine2 << endl;
        cout << "POBox: " << _POBox << endl;
        cout << "ZipCode: " << _ZipCode << endl;
    }
};

int main() {

    clsAddress Address1("123 Main St", "Apt 4B", "PO Box 567", "12345");
    Address1.Print();

    return 0;
}