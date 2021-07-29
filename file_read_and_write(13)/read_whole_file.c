#include <stdio.h>

int main(){
    FILE *fptr;
    char c;
    fptr = fopen("demo.txt","r");
    c = fgetc(fptr); // It will read character
    while(c!=EOF){
        printf("%c",c);
        c = fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}