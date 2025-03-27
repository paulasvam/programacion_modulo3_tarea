#include <iostream>
#include <limits> 
using namespace std;

int main() {
    int n;

    cout << "Ingrese el número de términos de la serie de Fibonacci a imprimir: ";
    cin >> n;


    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }

    if (n <= 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
        return 1; 
    }

    cout << "Serie de Fibonacci (primeros " << n << " términos):" << endl;

    long long a = 0, b = 1, siguienteTermino = 0;

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << a << " ";
            continue;
        }
        if (i == 2) {
            cout << b << " ";
            continue;
        }
        siguienteTermino = a + b;
        a = b;
        b = siguienteTermino;

        cout << siguienteTermino << " ";
    }
    cout << endl;

    return 0;
}