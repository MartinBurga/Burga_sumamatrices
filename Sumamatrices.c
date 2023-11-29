#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dx;
    int dy;
    int numero;
    int dx2;
    int dy2;
    int suma;

    printf("Inserta la dimension de su matriz en las filas\n");
    scanf("%d", &dx);
    printf("Inserta la dimension de su matriz en las columnas\n");
    scanf("%d", &dy);
    printf(" \n");
    printf("Inserta la dimension de su segunda matriz en las filas\n");
    scanf("%d", &dx2);
    printf("Inserta la dimension de su segunda matriz en las columnas\n");
    scanf("%d", &dy2);
    int matrix[dx][dy];
    int matriz[dx2][dy2];
 
    // Se le pide al usuario las dimensiones de sus dos matrices.

    if (dx == dx2 && dy == dy2)

    {
        for (int i = 0; i < dx; i++)
        {
            for (int j = 0; j < dy; j++)
            {
                numero = rand() % 100;
                numero = rand() % (numero + 1);
                matrix[i][j] = numero;
            }
        }

        for (int i = 0; i < dx2; i++)
        {
            for (int j = 0; j < dy2; j++)
            {
                numero = rand() % 100;
                numero = rand() % (numero + 1);
                matrix[i][j] = numero;
            }
        }

        printf(" \n");
        printf("Tu segund Matriz es: \n");
        for (int i = 0; i < dx; i++)
        {
            for (int j = 0; j < dy; j++)
            {

                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < dx2; i++)
        {
            for (int j = 0; j < dy2; j++)
            {

                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        suma = matrix[dx][dy] + matriz[dx2][dy2];

        printf("La suma de las matrices con numeros aleatorios es: %d\n", suma);
    }
    else if (dx != dx2 || dy != dy2)
    {
        printf("La suma de matrices no se puede realizar si las dimensiones no son iguales\n");
    }

    return 0;
}