#include <stdio.h>
#include <stdlib.h>

int main(){

    // Free - It is used to free allocate dynamic memory allocation.

    int *ptr;

    ptr = (int *)malloc(5*sizeof(int));

    for(int i = 0; i<5;i++){
        printf("Enter the integer value - \n");
        scanf("%d",&ptr[i]);
    }

    for(int i = 0; i<5;i++){
        printf("The element %d is - %d\n",i+1,ptr[i]);
    }

    // Here I used free() to free ptr
    free(ptr);  // It takes pointer

    return 0;
}