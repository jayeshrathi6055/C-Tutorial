#include <stdio.h>

// Taking pointer as a parameters
void swap(int *p,int *q){
    int c = *p;
    *p = *q;
    *q = c;
}

int main(){
    int a = 2;
    int b = 4;
    printf("The value of a and b is %d , %d \n",a,b); // Before swap
    swap(&a,&b);
    printf("The value of a and b is %d , %d \n",a,b); // After swap
    return 0;
}