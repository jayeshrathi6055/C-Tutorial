#include <stdio.h>

int main(){
    // Make pointer of variable
    int a = 5;
    int *p = &a;  // Make pointer using *
    printf("The value of a is %d\n",a);
    printf("The address of a is %d\n",&a);
    printf("The value of p is %d\n",p);  // p contains address of a
    printf("The address of p is %d\n",&p);
    printf("Access value of a in p is %d\n",*p);  // * is used to access data present in stored address
    printf("Access value of a in p is %u\n",*p);  // for pointer we use %u

    // Make pointer of pointer
    int b = 4;
    int *pointer = &b;
    int **double_pointer = &pointer;  // Make double pointer using **
    printf("The value of pointer is %d\n",pointer);
    printf("The address of pointer is %d\n",&pointer);
    printf("The value of double_pointer is %d\n",double_pointer);
    printf("The address of double_pointer is %d\n",&double_pointer);
    printf("Acess value of b in double_pointer is %d",**double_pointer);

    return 0;
}