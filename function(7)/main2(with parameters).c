#include <stdio.h>

int addition(int x,int y){  // function with require parameters
    return x+y;
}

int main(){
    int result = addition(10,11);  // function calling with arguements
    printf("Addition is %d",result);
    return 0;
}