#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;


bool esPalindromo(string str) {
    
    str.erase(remove_if(str.begin(), str.end(), ::ispunct), str.end()); 
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());   
    transform(str.begin(), str.end(), str.begin(), ::tolower);          

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return (str == reversedStr);
}

int main() {
    string palabra;

    cout << "Ingrese una palabra o frase: ";
    getline(cin, palabra); 

    if (esPalindromo(palabra)) {
        cout << "\"" << palabra << "\" es un palíndromo." << endl;
    } else {
        cout << "\"" << palabra << "\" no es un palíndromo." << endl;
    }

    return 0;
}