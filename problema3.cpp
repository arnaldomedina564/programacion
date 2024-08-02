// Problema 3
// Dado un arreglo de enteros unicos, genera todos los subconjuntos posibles (potencia de conjunto)

#include <iostream>
#include <cmath>

void imprimirSubconjunto(int arreglo[], int tamano) {
    std::cout << "{ ";
    for (int i = 0; i < tamano; ++i) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << "}\n";
}

void generarConjuntoPotencia(int conjunto[], int tamano) {
    int totalSubconjuntos = pow(2, tamano); 
    for (int i = 0; i < totalSubconjuntos; ++i) { 
        int subconjunto[tamano]; 
        int indice = 0; 
        for (int j = 0; j < tamano; ++j) {
            if (i & (1 << j)) {
                subconjunto[indice++] = conjunto[j];
            }
        }
        imprimirSubconjunto(subconjunto, indice);
    }
}

int main() {
    int conjunto[] = {1, 2, 3};
    int tamano = sizeof(conjunto) / sizeof(conjunto[0]);
    
    std::cout << "Conjunto potencia de {1, 2, 3}:\n";
    generarConjuntoPotencia(conjunto, tamano);
    
    return 0;
}
