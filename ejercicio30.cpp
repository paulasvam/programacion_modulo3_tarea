#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    const int maxAttempts = 7; 
    bool correctGuess = false;

    cout << "Adivina el número (entre 1 y 100)." << endl;
    cout << "Tienes " << maxAttempts << " intentos." << endl;

    while (attempts < maxAttempts && !correctGuess) {
        cout << "Tu adivinanza: ";
        cin >> guess;
        attempts++;

        if (cin.fail()) {
            cout << "Entrada inválida. Debes ingresar un número." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (guess < randomNumber) {
            cout << "El número es mayor. Intenta nuevamente." << endl;
        } else if (guess > randomNumber) {
            cout << "El número es menor. Intenta nuevamente." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número en " << attempts << " intentos. Era " << randomNumber << endl;
            correctGuess = true;
        }

        if (!correctGuess && attempts < maxAttempts) {
            cout << "Te quedan " << maxAttempts - attempts << " intentos." << endl;
        }
    }

    if (!correctGuess) {
        cout << "¡Se te acabaron los intentos! El número era " << randomNumber << endl;
    }

    cout << "¡Juego terminado!" << endl;

    return 0;
}