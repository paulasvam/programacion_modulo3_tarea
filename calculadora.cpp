#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char oper, choice;

    do {
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        cout << "Ingrese la operación (+, -, *, /): ";
        cin >> oper;

        switch (oper) {
            case '+':
                result = num1 + num2;
                cout << "Resultado: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Resultado: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Resultado: " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Resultado: " << result << endl;
                } else {
                    cout << "Error: División por cero no permitida." << endl;
                }
                break;
            default:
                cout << "Operador no válido. Inténtelo de nuevo." << endl;
        }

        cout << "¿Desea realizar otra operación? (s/n): ";
        cin >> choice;
    } while (choice == 's' || choice == 'S');

    cout << "¡Gracias por usar la calculadora! Hasta luego." << endl;
    return 0;
}