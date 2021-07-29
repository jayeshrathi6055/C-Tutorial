#include <stdio.h>
#include <stdlib.h>

int main(){

    // Dynamic Memory Allocation - It is used to allocate or destroy a memory location during runtime

    // First Make pointer
    int *ptr;

    // Allocate dynamaic memory
    ptr = (int *)malloc(5*sizeof(int));  // (typeCaste to int pointer)malloc(number of memory * size of int byte)

    // Taking user input
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