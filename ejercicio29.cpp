#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numero;
    int sumaPositivos = 0;
    int max_numero = numeric_limits<int>::min();
    int min_numero = numeric_limits<int>::max();
    bool hasPositive = false;

    cout << "Introduce números (negativo para terminar):" << endl;

    while (true) {
        cout << "Número: ";
        cin >> numero;

        if (numero < 0) {
            break;
        }

        if (numero > 0) {
            sumaPositivos += numero;
            hasPositive = true;

            if (numero > max_numero) {
                max_numero = numero;
            }
            if (numero < min_numero) {
                min_numero = numero;
            }
        }
    }

    cout << "Suma de positivos: " << sumaPositivos << endl;

    if (hasPositive) {
        cout << "Valor máximo: " << max_numero << endl;
        cout << "Valor mínimo: " << min_numero << endl;
    } else {
        cout << "No se ingresaron positivos." << endl;
    }

    return 0;
}
 
