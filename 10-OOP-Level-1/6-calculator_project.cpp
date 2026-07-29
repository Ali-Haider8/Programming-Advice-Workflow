// created by ali_h at 2026-07-27 11:40

#include <iostream>

using namespace std;

class clsCalculator {
  private:
    int x;
    int y;
    int s;
    string last;

  public:
    void Clear() {
        x = 0;
        s = 0;
        last = "Clear";
    }

    void Add(int n) {
        x = x + n;
        s = n;
        last = "Adding";
    }

    void PrintResult() {
        cout << "Result After " + last << " " << s << " is: " << x << endl;
    }

    void Subtract(int n) {
        x = x - n;
        s = n;
        last = "Subtracting";
    }

    void Divide(int n) {
        if (n == 0) {
            n = 1;
        }
        x = x / n;
        s = n;
        last = "Dividing";
    }

    void Multiply(int n) {
        x = x * n;
        s = n;
        last = "Multiplying";
    }

   
};

int main() {

    clsCalculator Calculator1;

    Calculator1.Clear();

    Calculator1.Add(10);
    Calculator1.PrintResult();

    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Subtract(20);
    Calculator1.PrintResult();

    Calculator1.Divide(0);
    Calculator1.PrintResult();

    Calculator1.Divide(2);
    Calculator1.PrintResult();

    Calculator1.Multiply(3);
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();

    system("pause>0");

    return 0;
}