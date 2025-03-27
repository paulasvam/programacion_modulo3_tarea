#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toBase(int num, int base) {
    if (num == 0) return "0";
    string result = "";
    while (num > 0) {
        int rem = num % base;
        char c = (rem < 10) ? (rem + '0') : (rem - 10 + 'A');
        result = c + result;
        num /= base;
    }
    return result;
}

int main() {
    int num, base;

    cout << "Número decimal: ";
    cin >> num;

    cout << "Base (2 para binario, 16 para hexadecimal): ";
    cin >> base;

    if (base != 2 && base != 16) {
        cout << "Base no soportada. Use 2 o 16." << endl;
        return 1;
    }

    cout << "Resultado: " << toBase(num, base) << endl;

    return 0;
}