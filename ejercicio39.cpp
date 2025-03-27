#include <iostream>
#include <limits> 
#include <iomanip> 

using namespace std;


double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}


double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}


double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}


double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    int choice;
    double temperature;

    cout << "Conversor de Temperaturas" << endl;
    cout << "1. Celsius a Fahrenheit" << endl;
    cout << "2. Celsius a Kelvin" << endl;
    cout << "3. Fahrenheit a Celsius" << endl;
    cout << "4. Fahrenheit a Kelvin" << endl;
    cout << "5. Kelvin a Celsius" << endl;
    cout << "6. Kelvin a Fahrenheit" << endl;
    cout << "Ingrese su opción (1-6): ";
    cin >> choice;

    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número entero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }
    if (choice < 1 || choice > 6) {
        cout << "Opción inválida. Por favor, ingrese un número entre 1 y 6." << endl;
        return 1;
    }

    cout << "Ingrese la temperatura a convertir: ";
    cin >> temperature;

    if (cin.fail()) {
        cout << "Entrada inválida. Debe ingresar un número." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; 
    }

    double result;


    cout << fixed << setprecision(2);

    switch (choice) {
        case 1:
            result = celsiusToFahrenheit(temperature);
            cout << temperature << " Celsius es igual a " << result << " Fahrenheit" << endl;
            break;
        case 2:
            result = celsiusToKelvin(temperature);
            cout << temperature << " Celsius es igual a " << result << " Kelvin" << endl;
            break;
        case 3:
            result = fahrenheitToCelsius(temperature);
            cout << temperature << " Fahrenheit es igual a " << result << " Celsius" << endl;
            break;
        case 4:
            result = fahrenheitToKelvin(temperature);
            cout << temperature << " Fahrenheit es igual a " << result << " Kelvin" << endl;
            break;
        case 5:
            result = kelvinToCelsius(temperature);
            cout << temperature << " Kelvin es igual a " << result << " Celsius" << endl;
            break;
        case 6:
            result = kelvinToFahrenheit(temperature);
            cout << temperature << " Kelvin es igual a " << result << " Fahrenheit" << endl;
            break;
    }

    return 0;
}