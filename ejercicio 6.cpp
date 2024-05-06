#include <stdio.h>

int contarOcurrencias(int arr[], int n, int elemento) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == elemento) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elemento = 3;
    int ocurrencias = contarOcurrencias(arr, n, elemento);
    printf("El elemento %d se encuentra %d veces en el arreglo.\n", elemento, ocurrencias);
    return 0;
}
