#include <stdio.h>
#include <string.h>

void concatenar(char *cadena1, char *cadena2, char *resultado) {
    strcpy(resultado, cadena1);
    strcat(resultado, cadena2);
}

int main() {
    char cadena1[] = "Hola ";
    char cadena2[] = "Mundo";
    char resultado[20];
    concatenar(cadena1, cadena2, resultado);
    printf("Cadena concatenada: %s\n", resultado);
    return 0;
}
