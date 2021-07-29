#include <stdio.h>

int main(){
    // First Make file pointer
    FILE *ptr;

    // Declare variable
    int num;

    // Use of fopen()
    ptr = fopen("sample.txt","r");  // fileName, mode(r,w,rb,wb,a)

    // Transfer data from file pointer to variable using fscanf()
    fscanf(ptr,"%d",&num);  // filePointer, variabelType, addresOfVariable

    // Now print the variable
    printf("The value of num is %d",num);

    // At last close file pointer
    fclose(ptr);
    return 0;
}