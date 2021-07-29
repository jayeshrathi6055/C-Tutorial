#include <stdio.h>

int factorial(int x){  // self calling function is called recurrsion function
    if(x==1 || x == 0){
        return 1;
    }
    return x * factorial(x-1);
}

int main(){
    int a = 6;
    printf("The factorial of %d is %d",a,factorial(a));
    return 0;
}