#include <iostream>
using namespace std;

int main() {
    int tipo;
    float distancia, tarifa;

    cout << "Tipo de usuario:\n1. Estudiante\n2. Adulto\n3. Adulto mayor\n";
    cin >> tipo;

    cout << "Ingrese distancia (km): ";
    cin >> distancia;

    if (tipo == 1) {
        tarifa = distancia * 0.5;
    } else if (tipo == 2) {
        tarifa = distancia * 1.0;
    } else if (tipo == 3) {
        tarifa = distancia * 0.3;
    } else {
        cout << "Tipo invalido";
        return 0;
    }

    cout << "Tarifa a pagar: S/ " << tarifa;

    return 0;
}