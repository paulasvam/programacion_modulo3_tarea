#include <iostream>

int main() {
    double base;
    int exponente;
    double resultado = 1;

    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa el exponente: ";
    std::cin >> exponente;

    for (int i = 0; i < exponente; ++i) {
        resultado *= base; 
    }

    std::cout << base << " elevado a " << exponente << " es: " << resultado << std::endl;

    return 0;
}