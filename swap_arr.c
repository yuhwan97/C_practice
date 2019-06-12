#include <stdio.h>
#include <stdlib.h>

void swap_arr(int *arr1[], int *arr2[], int size)
{
    int* tmp = (int*) malloc(size*sizeof(int));

    for(int i = 0; i < size ; i++){
        tmp[i] = arr1[i];
    }

    for(int i = 0; i < size ; i++){
        *arr1 = arr2[i];
        *arr1++;
    }

    for(int i = 0; i < size ; i++){
        *arr2 = tmp[i];
        *arr2++;
    }

    free(tmp);
}

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Input first array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Input second array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr2[i]);
    }

    swap_arr(&arr1, &arr2, size);

    printf("First array after swapping: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array after swapping: ");

    for(int i = 0; i < size; i++){
        printf("%d ", arr2[i]);
    }

    printf("\n");
    return 0;

}
