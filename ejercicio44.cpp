#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
 
    std::srand(static_cast<unsigned int>(std::time(0)));

    int opcionUsuario;
    std::cout << "Selecciona una opción:\n";
    std::cout << "0: Piedra\n";
    std::cout << "1: Papel\n";
    std::cout << "2: Tijeras\n";
    std::cout << "Tu opción: ";
    std::cin >> opcionUsuario;


    int opcionComputadora = std::rand() % 3;

    std::cout << "Computadora eligió: " << opcionComputadora << "\n";


    if (opcionUsuario == opcionComputadora) {
        std::cout << "¡Es un empate!\n";
    } else if ((opcionUsuario == 0 && opcionComputadora == 2) || 
               (opcionUsuario == 1 && opcionComputadora == 0) || 
               (opcionUsuario == 2 && opcionComputadora == 1)) {
        std::cout << "¡Ganaste!\n";
    } else {
        std::cout << "¡Perdiste!\n";
    }

    return 0;
}