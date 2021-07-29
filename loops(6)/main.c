#include <stdio.h>

int main(){
    int num;
    printf("Enter your favorite number - ");
    scanf("%d",&num);

    // For loop
    printf("By for loop\n");
    for(int i = 1;i<11;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }

    // while Loop
    printf("By while loop\n");
    int i = 1;
    while (i<11)
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }

    // Do-while Loop
    printf("By do-while loop\n");
    int j = 0;
    do{
        j++;
        printf("%d * %d = %d\n",num,j,num*j);
    }while(j<10);
    
    return 0;
}