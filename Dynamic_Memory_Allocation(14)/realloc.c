#include <stdio.h>
#include <stdlib.h>

int main(){
    // realloc() - Sometimes the dynamically allocated memory is insufficient or more than reqired. It is used to allocate memory of new size using the previous pointer and size. 

    int *ptr;
    // Allocate dynamic memory using Malloc()
    ptr = (int *)malloc(5*sizeof(int));
    for(int i = 0; i<5;i++){
        printf("Enter the integer value - \n");
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i<5;i++){
        printf("The element %d is - %d\n",i+1,ptr[i]);
    }

    // Reallocate same pointer from 5 to 8 using realloc()
    ptr = realloc(ptr, 8*sizeof(int));  // (pointerName, number of memory * size of int byte)
    for(int i = 0; i<8;i++){
        printf("Enter the integer value - \n");
        scanf("%d",&ptr[i]);
    }
    for(int i = 0; i<8;i++){
        printf("The element %d is - %d\n",i+1,ptr[i]);
    }
    return 0;
}