#include <stdio.h>
#include <string.h>

int main(){
    // Use of strlen() - It is used to find the length of a string
    char find_length[] = "Find my length";
    int length = strlen(find_length);
    printf("The length of the string is - %d\n",length);

    // Use of strcpy() - It is used to copy a string from source and insert into target
    char source[] = "source";
    char target[45];
    strcpy(target,source);  // target, source
    printf("The value of target is %s\n",target);

    // Use of strcat() - It is used to concatinate more string
    char cat1[] = "My name is ";
    char cat2[] = "Jayesh Rathi";
    strcat(cat1,cat2); // target, source
    printf("The value of cat1 is %s\n",cat1);

    // Use of strcmp() - It is used to compare 2 strings. If string is equal, return 0 otherwise it will return 1 or -1
    char s1[] = "hello";
    char s2[] = "hi";
    char s3[] = "hello";
    int result1 = strcmp(s1,s2);  // It will not match 
    int result2 = strcmp(s1,s3);  // It will match
    printf("Result1 is %d and Result2 is %d \n",result1,result2);
    return 0;
}