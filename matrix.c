#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int **createMatrix(int cols, int rows)
{
    int total, i, j, status;
    int **ptr = (int **) malloc(sizeof(int *) * rows);

    for(i = 0; i < cols; i++){
        ptr[i] = (int *)malloc(sizeof(int *) * cols);
    }

    i = 0;

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter your data: ");
            scanf("%d", &status);
            ptr[i][j] = status;
        }
    }

    return ptr;
}

void printMatrix(int cols, int rows, int **dptr)
{ 
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\n",dptr[i][j]);
        }
    }
}

void freeMatrix(int rows, int **dptr)
{
    int i, j;
    for(i = 0; i < rows; i++){
        free(dptr[i]);
    }

    free(dptr);
}