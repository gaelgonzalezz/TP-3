#include <stdio.h>

void mayorMenor(int arr[], int n, int *mayor, int *menor) {
    *mayor = arr[0];
    *menor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *mayor) {
            *mayor = arr[i];
        }
        if (arr[i] < *menor) {
            *menor = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mayor, menor;
    mayorMenor(arr, n, &mayor, &menor);
    printf("Mayor: %d, Menor: %d\n", mayor, menor);
    return 0;
}
