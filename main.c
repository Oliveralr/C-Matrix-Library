#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main()
{
    int **ptr;
    int row, col;

    printf("Enter row(s) number: ");
    scanf("%d", &row);
    printf("Enter column(s) number: ");
    scanf("%d", &col);

    ptr = createMatrix(row,col);
    printMatrix(row,col,ptr);
    freeMatrix(row,ptr);

    printf("\n");

    return 0;
}