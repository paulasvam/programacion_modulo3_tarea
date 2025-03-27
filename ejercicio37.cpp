#include <iostream>
#include <vector>
#include <cmath> 
#include <limits>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    if (numero <= 3) {
        return true;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }
   
    for (int i = 5; i * i <= numero; i = i + 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;

    cout << "Ingrese el rango de números para buscar primos:" << endl;
    cout << "Inicio: ";
    cin >> inicio;

  
    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }

    cout << "Fin: ";
    cin >> fin;

 
    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }
    
    if (inicio > fin) {
        cout << "El valor de inicio debe ser menor o igual al valor final." << endl;
        return 1;
    }

    cout << "Números primos en el rango [" << inicio << ", " << fin << "]:" << endl;

    for (int i = inicio; i <= fin; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}