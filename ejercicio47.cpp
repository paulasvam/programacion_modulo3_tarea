#include <iostream>
#include <cmath>

int main() {
    int n; 
    double a; 
    double r; 
    double suma = 0; 

    std::cout << "Ingresa el número de términos (n): ";
    std::cin >> n;
    std::cout << "Ingresa el primer término (a): ";
    std::cin >> a;
    std::cout << "Ingresa la razón (r): ";
    std::cin >> r;

    if (r == 1) {
        suma = a * n; 
    } else {
        suma = a * (1 - std::pow(r, n)) / (1 - r); 
    }

    std::cout << "La suma de la serie geométrica es: " << suma << std::endl;

    return 0;
}