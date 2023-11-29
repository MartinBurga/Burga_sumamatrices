#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int dx, dy, dx2, dy2, suma = 0;

    printf("Inserta la dimension de su matriz en las filas\n");
    scanf("%d", &dx);
    printf("Inserta la dimension de su matriz en las columnas\n");
    scanf("%d", &dy);
    printf("Inserta la dimension de su segunda matriz en las filas\n");
    scanf("%d", &dx2);
    printf("Inserta la dimension de su segunda matriz en las columnas\n");
    scanf("%d", &dy2);

    int matrix[dx][dy];
    int matriz[dx2][dy2];

    if (dx == dx2 && dy == dy2) {
        for (int i = 0; i < dx; i++) {
            for (int j = 0; j < dy; j++) {
                int numero = rand() % 100;
                matrix[i][j] = numero;
            }
        }

        for (int i = 0; i < dx2; i++) {
            for (int j = 0; j < dy2; j++) {
                int numero = rand() % 100;
                matriz[i][j] = numero;
            }
        }

        printf("Tu primera Matriz es:\n");
        for (int i = 0; i < dx; i++) {
            for (int j = 0; j < dy; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        printf("Tu segunda Matriz es:\n");
        for (int i = 0; i < dx2; i++) {
            for (int j = 0; j < dy2; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        printf("La suma de las matrices con numeros aleatorios es:\n");
        for (int i = 0; i < dx; i++) {
            for (int j = 0; j < dy; j++) {
                suma = matrix[i][j] + matriz[i][j];
                printf("%d ", suma);
            }
            printf("\n");
        }
    } else if (dx != dx2 || dy != dy2) {
        printf("La suma de matrices no se puede realizar si las dimensiones no son iguales\n");
    }

    return 0;
}
