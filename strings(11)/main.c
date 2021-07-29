#include <stdio.h>

int main(){
    // Methods to make string----------------------------------------------->
    // Method 1 - Using array------->
    char s[] = {'J','a','y','e','s','h','\0'};
    char *ptr = s;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");

    // Method 2 - Using double quotes-------->
    char st[] = "Hello sir";
    printf("Your string is - %s\n",st);

    // Method 3 - Using Pointer-------->
    char *p = "Hello Buddy";
    printf("%s\n",p);

    // Taking inputs as a string------------------------------------->
    char str[20];  // It is must to define the size of array
    char name[50];

    // Method 1 - Using scanf ---------->
    printf("Enter your string -");
    scanf("%s",str);  // Drawback - It will not consider spaces between string and exit from there.
    printf("Your string is %s\n",str); // It is 1st method to print string
    puts(str);  // This is second method to print string

    // Method 2 - Using gets() -------->
    fflush(stdin); // It is used to flush previous inputs
    gets(name); // It will consider spaces between string
    puts(name);
}