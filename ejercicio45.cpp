#include <iostream>
#include <vector>
#include <limits>

int main() {
    int N;
    std::cout << "¿Cuántas calificaciones deseas ingresar? ";
    std::cin >> N;

    std::vector<double> calificaciones(N);
    double suma = 0;
    double maxCalificacion = std::numeric_limits<double>::lowest();
    double minCalificacion = std::numeric_limits<double>::max();
    int aprobados = 0;

    for (int i = 0; i < N; ++i) {
        std::cout << "Ingresa la calificación " << (i + 1) << ": ";
        std::cin >> calificaciones[i];

        suma += calificaciones[i];

        if (calificaciones[i] > maxCalificacion) {
            maxCalificacion = calificaciones[i];
        }

        if (calificaciones[i] < minCalificacion) {
            minCalificacion = calificaciones[i];
        }

        if (calificaciones[i] >= 10) {
            aprobados++;
        }
    }

    double promedio = suma / N;

    std::cout << "\nResultados:\n";
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Calificación más alta: " << maxCalificacion << std::endl;
    std::cout << "Calificación más baja: " << minCalificacion << std::endl;
    std::cout << "Cantidad de alumnos aprobados: " << aprobados << std::endl;

    return 0;
}