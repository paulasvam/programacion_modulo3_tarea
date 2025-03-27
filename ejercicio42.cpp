#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Producto {
    string nombre;
    double precio;
};

double calcularTotal(const vector<Producto>& productos) {
    double total = 0.0;
    for (const auto& producto : productos) {
        total += producto.precio;
    }
    return total;
}

double aplicarDescuento(double total, double umbral, double porcentajeDescuento) {
    if (total > umbral) {
        return total * (1 - porcentajeDescuento / 100);
    }
    return total;
}

int main() {
    vector<Producto> productos;
    string nombreProducto;
    double precioProducto;
    
    const double umbralDescuento = 100.0; 
    const double porcentajeDescuento = 10.0; 

    cout << "Bienvenido a la tienda!" << endl;

    while (true) {
        cout << "Ingrese el nombre del producto (o 'fin' para terminar): ";
        cin >> nombreProducto;

        if (nombreProducto == "fin") {
            break; 
        }

        cout << "Ingrese el precio del producto: ";
        cin >> precioProducto;

        productos.push_back({nombreProducto, precioProducto});
        
        cout << "Producto agregado: " << nombreProducto << " - Precio: $" << fixed << setprecision(2) << precioProducto << endl;
    }

    double totalCompra = calcularTotal(productos);
    
    double totalFinal = aplicarDescuento(totalCompra, umbralDescuento, porcentajeDescuento);

    cout << "\nResumen de la compra:" << endl;
    
    for (const auto& producto : productos) {
        cout << "- " << producto.nombre << ": $" << fixed << setprecision(2) << producto.precio << endl;
    }

    cout << "\nTotal sin descuento: $" << fixed << setprecision(2) << totalCompra 
         << "\nTotal con descuento: $" << fixed << setprecision(2) << totalFinal 
         << endl;

   return 0;
}