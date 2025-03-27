#include <iostream>
#include <limits>
#include <stdexcept> // For std::invalid_argument

using namespace std;

long long factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Error use numeros positivos.");
    }
    if (n > 20) {
       throw overflow_error("Factorial sobrepaso el valor maximo");
    }

    long long result = 1; 

    for (int i = 1; i <= n; ++i) { 
        result *= i;
    }
    return result;
}

int main() {
    int numero;

    cout << "Introduce un número entero no negativo: ";
    cin >> numero;

    if (cin.fail()) {
        cout << "Entrada inválida. Debes ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }

    try {
        long long resultadoFactorial = factorial(numero);
        cout << "El factorial de " << numero << " es: " << resultadoFactorial << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;  
    } catch (const overflow_error& e) {
        cerr << "Error: " << e.what() << endl;  
    }

    return 0;
}