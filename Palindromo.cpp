#include <iostream>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin >> cadena;

    int i = 0;
    int j = cadena.length() - 1;
    bool esPalindromo = true;

    while (i < j) {
        if (cadena[i] != cadena[j]) {
            esPalindromo = false;
            break;
        }
        i++;
        j--;
    }

    if (esPalindromo)
        cout << "Es palindromo";
    else
        cout << "No es palindromo";

    return 0;
}