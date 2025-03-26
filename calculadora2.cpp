#include <iostream>
#include <cmath>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Error: División por cero.");
    }
    return a / b;
}

double raizCuadrada(double a) {
    if (a < 0) {
        throw invalid_argument("Error: Raíz cuadrada de un número negativo.");
    }
    return sqrt(a);
}

double cuadrado(double a) {
    return a * a;
}

int main() {
    int opcion;
    double num1, num2;

    do {
        cout << "Calculadora Avanzada" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Raíz cuadrada" << endl;
        cout << "6. Cuadrado de un número" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << suma(num1, num2) << endl;
                break;
            case 2:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << resta(num1, num2) << endl;
                break;
            case 3:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                cout << "Resultado: " << multiplicacion(num1, num2) << endl;
                break;
            case 4:
                cout << "Ingrese dos números: ";
                cin >> num1 >> num2;
                try {
                    cout << "Resultado: " << division(num1, num2) << endl;
                } catch (const invalid_argument& e) {
                    cout << e.what() << endl;
                }
                break;
            case 5:
                cout << "Ingrese un número: ";
                cin >> num1;
                try {
                    cout << "Resultado: " << raizCuadrada(num1) << endl;
                } catch (const invalid_argument& e) {
                    cout << e.what() << endl;
                }
                break;
            case 6:
                cout << "Ingrese un número: ";
                cin >> num1;
                cout << "Resultado: " << cuadrado(num1) << endl;
                break;
            case 7:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
        cout << endl;
    } while (opcion != 7);

    return 0;
}