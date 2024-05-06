#include <stdio.h>

void sumaPromedio(int arr[], int n, int *suma, float *promedio) {
    *suma = 0;
    for (int i = 0; i < n; i++) {
        *suma += arr[i];
    }
    *promedio = (float)*suma / n;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int suma;
    float promedio;
    sumaPromedio(arr, n, &suma, &promedio);
    printf("Suma: %d, Promedio: %.2f\n", suma, promedio);
    return 0;
}
