#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string frase;
    std::cout << "Ingresa una frase: ";
    std::getline(std::cin, frase);

    std::istringstream iss(frase);
    std::string palabra;
    int contador = 0;

    while (iss >> palabra) {
        contador++;
    }

    std::cout << "La frase contiene " << contador << " palabras." << std::endl;
    return 0;
}