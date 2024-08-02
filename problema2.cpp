// Problema 2
// Data una matriz cuadrada de nxn, escribe una funcion que rote la matrix 90 grados  en sentido horario y devuelva la matriz rotada

#include <iostream>

void imprimirMatriz(int matriz[][3], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void rotarMatriz90Grados(int matriz[][3], int n) {
    int matrizRotada[3][3];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrizRotada[j][n - i - 1] = matriz[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = matrizRotada[i][j];
        }
    }
}

int main() {
    const int n = 3; 
    int matriz[n][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    std::cout << "Matriz original:" << std::endl;
    imprimirMatriz(matriz, n);

    rotarMatriz90Grados(matriz, n);

    std::cout << "\nMatriz rotada 90 grados en sentido horario:" << std::endl;
    imprimirMatriz(matriz, n);

    return 0;
}

