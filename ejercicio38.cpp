#include <iostream>
#include <limits> 
using namespace std;

int main() {
    int altura;

    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }
    if (altura <= 0) {
        cout << "La altura debe ser un número entero positivo." << endl;
        return 1; 
    }

    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= altura - i; ++j) {
            cout << " ";
        }

        
        for (int k = 1; k <= (2 * i - 1); ++k) { 
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}