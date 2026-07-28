// created by ali_h at 2026-07-27 18:33

#include <iostream>

using namespace std;

class clsCalculator {

    private:
    float _Result = 0;
    float _LastNumber = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;

    bool _IsZero(float Number) {
        return (Number == 0);
    }

    public:

    void Add(float Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    void Subtract(float Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }

    void Divide(float Number) {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Dividing";
        _Result /= Number;
    }

    void Multiply(float Number) {
        _LastNumber = Number;
        _LastOperation = "Multiplying";
        _PreviousResult = _Result;
        _Result *= Number;
    }

    float GetFinalResult() {
        return _Result;
    }

    void Clear() {
        _LastNumber = 0;
    }
};

int main() {

    

    return 0;
}