

#include <iostream>
#include "binary.h"

using namespace std;

int main() {
    double decimalValue;

    cout << "Enter a decimal value: ";

    cin >> decimalValue;

    int integerPart = decimalValue;
    double decimalPart = decimalValue - integerPart;

    
    binaryStack binaryIntegerStack(32); 
    while (integerPart > 0) {
        int remainder = integerPart % 2;
        binaryIntegerStack.push(remainder);
        integerPart /= 2;
    }

    
    cout << "Binary representation of integer part: ";

    while (!binaryIntegerStack.isEmpty()) {
        cout << binaryIntegerStack.pop();
    }

    cout << endl;

    
    binaryQueue binaryDecimalQueue(4);
    int digitCount = 0;
    while (decimalPart > 0 && digitCount < 4) {
        decimalPart *= 2;
        int bit = decimalPart;
        binaryDecimalQueue.enqueue(bit);
        decimalPart -= bit;
        digitCount++;
    }

    
    cout << "Binary representation of decimal part: ";

    while (!binaryDecimalQueue.isEmpty()) {
        cout << binaryDecimalQueue.dequeue();
    }

    cout << endl;

    return 0;
}


