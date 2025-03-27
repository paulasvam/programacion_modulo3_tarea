#include <iostream>
#include <limits> // Required for numeric_limits
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número para generar su tabla de multiplicar (hasta el 10): ";
    cin >> numero;


    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return 1; 
    }

    if (numero < 0) { 
        cout << "Por favor, ingrese un número no negativo." << endl;
        return 1; 
    }

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}