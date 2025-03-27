#include <iostream>

int main() {
    int numero, invertido = 0;

    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    while (numero != 0) {
        int digito = numero % 10; 
        invertido = invertido * 10 + digito; 
        numero /= 10; 
    }

    std::cout << "Número invertido: " << invertido << std::endl;

    return 0;
}