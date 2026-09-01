// created by ali_h at 2026-08-21 21:05

#include <iostream>

using namespace std;

class clsA {
  private:
    // only accessible inside this class, neither derived classes nor outside class.
    int _Var1;
    void _Fun1() {
        cout << "Function 1" << endl;
    }

  protected:
    // only accessible inside this class and all derived classes, but not outside class
    int Var2;
    void Fun2() {
        cout << "Function 2" << endl;
    }

  public:
    // Accessible inside this class, all derived classes, and outside class
    int Var3;
    void Fun3() {
        cout << "Function 3" << endl;
    }
};

class clsB : public clsA {
  public:
    void Func1() {
        cout << clsA::Var2 << endl;
    }
};

int main() {

    // in object you can see public members only.

    clsA A;
    A.Fun3();
    A.Var3;

    clsB B;
    B.Fun3();  // clsA
    B.Func1(); // clsB
    B.Var3;    // clsA

    system("pause>0");
    return 0;
}