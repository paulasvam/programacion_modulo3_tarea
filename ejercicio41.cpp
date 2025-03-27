#include <iostream>
#include <vector>
#include <map>

int main() {
    std::vector<int> numeros;
    int numero;
    char continuar;

    do {
        std::cout << "Introduce un número: ";
        std::cin >> numero;
        numeros.push_back(numero);

        std::cout << "¿Quieres introducir otro número? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    std::map<int, int> contador;

    for (int num : numeros) {
        contador[num]++;
    }

    std::cout << "\nNúmeros repetidos y sus conteos:\n";
    bool hayRepetidos = false;

    for (const auto& par : contador) {
        if (par.second > 1) {
            std::cout << "Número: " << par.first << ", Repeticiones: " << par.second << "\n";
            hayRepetidos = true;
        }
    }

    if (!hayRepetidos) {
        std::cout << "No hay números repetidos.\n";
    }

    return 0;
}