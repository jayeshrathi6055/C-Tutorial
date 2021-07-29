#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calloc - It stands for continue allocation. It initializes each memory block with a default value of 0.

    int *ptr;

    // Allocate dynamaic memory
    ptr = (int *)calloc(5, sizeof(int));  // (typeCaste to int pointer)calloc(number of memory, size of int byte)

    // Show all values(Before taking user input) - By default it will return 0
    for(int i = 0; i<5;i++){
        printf("The element %d is - %d\n",i+1,ptr[i]);
    }

    // After Taking user input
    for(int i = 0; i<5;i++){
        printf("Enter the integer value - \n");
        scanf("%d",&ptr[i]);
    }

    // Show all values
    for(int i = 0; i<5;i++){
        printf("The element %d is - %d\n",i+1,ptr[i]);
    }
    return 0;
}