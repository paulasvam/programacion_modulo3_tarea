#include <iostream>
#include <vector>
#include <algorithm> // For std::sort and std::reverse
#include <limits>   // For numeric_limits

using namespace std;

int main() {
    vector<int> numeros;
    int numero;

    cout << "Ingrese una lista de números (ingrese un valor no numérico para terminar):" << endl;

  
    while (true) {
        cout << "Número: ";
        cin >> numero;

        if (cin.fail()) {
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the invalid input
            break; 
        }
        numeros.push_back(numero);
    }
 
    if (numeros.empty()) {
        cout << "No se ingresaron números." << endl;
        return 0; 
    }

    vector<int> numerosDescendente = numeros;


    sort(numeros.begin(), numeros.end());

    sort(numerosDescendente.begin(), numerosDescendente.end(), greater<int>());  // Use greater<int>() for descending order

    cout << "\nNúmeros en orden ascendente:" << endl;
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "\nNúmeros en orden descendente:" << endl;
    for (int num : numerosDescendente) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}