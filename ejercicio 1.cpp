#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5, b = 10;
    printf("Valores iniciales: a = %d, b = %d\n", a, b);
    intercambiar(&a, &b);
    printf("Valores finales: a = %d, b = %d\n", a, b);
    return 0;
}
