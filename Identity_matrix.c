#include <stdio.h>
#include <stdlib.h>




int main()
{
    int size;
    scanf("%d", &size);

    int** matrix = (int**) malloc(size*sizeof(int*));

    for(int i = 0; i < size; i++){
        matrix[i] =  malloc(size*sizeof(int));
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i==j)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(j == size-1)
                printf("%d\n", matrix[i][j]);
            else
                printf("%d ", matrix[i][j]);
        }
    }

    for(int i = 0; i < size; i++){
        free(matrix[i]);
    }
    free(matrix);


    return 0;

}
