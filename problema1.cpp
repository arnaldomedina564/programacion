// Problema 1 
// Escribe una funcion que tome un arreglo de entreros y un numero "k", y determine si existen dos numeros en el arreglo cuya suma sea igual a "k"

#include <iostream>

using namespace std;

bool existenDosNumerosConSuma(int arreglo[], int longitud, int k) {
    for (int i = 0; i < longitud - 1; ++i) {
        for (int j = i + 1; j < longitud; ++j) {
            if (arreglo[i] + arreglo[j] == k) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arreglo[] = {4, 1, 5, 2, 3};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int k = 5;

    if (existenDosNumerosConSuma(arreglo, longitud, k)) {
        cout << "Existen dos números en el arreglo cuya suma es igual a " << k << endl;
    } else {
        cout << "No existen dos números en el arreglo cuya suma sea igual a " << k << endl;
    }

    return 0;
}
