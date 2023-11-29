#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dx;
    int dy;
    int numero;
    int numero2;
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

        for (int ix = 0; ix < dx2; ix++)
        {
            for (int jx = 0; jx < dy2; jx++)
            {
                numero2 = rand() % 100;
                numero2 = rand() % (numero2 + 1);
                matrix[ix][jx] = numero2;
            }
        }

       
        for (int i = 0; i < dx; i++)
        {
            for (int j = 0; j < dy; j++)
            {

                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        printf(" \n");
        printf("Tu segunda Matriz es: \n");

        for (int ix = 0; ix < dx2; ix++)
        {
            for (int jx = 0; jx < dy2; jx++)
            {

                printf("%d ", matriz[ix][jx]);
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