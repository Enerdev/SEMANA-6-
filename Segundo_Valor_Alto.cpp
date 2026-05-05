#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de elementos: ";
    cin >> N;

    int arr[N];

    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int mayor = arr[0];
    int segundo = -999999;

    for (int i = 1; i < N; i++) {
        if (arr[i] > mayor) {
            segundo = mayor;
            mayor = arr[i];
        } else if (arr[i] > segundo && arr[i] != mayor) {
            segundo = arr[i];
        }
    }

    cout << "Segundo mayor: " << segundo;

    return 0;
}