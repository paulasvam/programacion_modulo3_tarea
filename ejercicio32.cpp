#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
        return 1; 
    }

    int sumaDivisores = 0;

    for (int i = 1; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            sumaDivisores += i;
        }
    }


    if (sumaDivisores == numero) {
        cout << numero << " es un número perfecto." << endl;
    } else {
        cout << numero << " no es un número perfecto." << endl;
    }

    return 0;
}