#include <stdio.h>

int main(){
    // Two method to set value in array------------------>
    // Method 1
    int arr[10];  
    arr[0] = 3;
    arr[1] = 6;
    arr[2] = 4;
    arr[3] = 8;
    printf("The value of array is %d \n",arr);  // It will print the address of array
    printf("The value of arr[0] is %d \n",arr[0]);
    printf("The value of arr[1] is %d \n",arr[1]);
    printf("The value of arr[2] is %d \n",arr[2]);
    printf("The value of arr[3] is %d \n",arr[3]);

    // Method 2
    int marks[] = {80,70,60,50};
    int length = sizeof(marks)/sizeof(marks[0]);
    for (int i = 0; i < length; i++)
    {
        printf("The value of %d is %d\n",i,marks[i]);
    }

    // Pointers with array------------------------------------>
    int score[4];
    int *ptr;
    ptr = score;
    int score_length = sizeof(score)/sizeof(score[0]);
    // Here I am storing values in score
    for (int i = 0; i < score_length; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    // Here I am print all values in score 
    for (int i = 0; i < score_length; i++)
    {
        printf("The score of %d is %d \n",i,score[i]);
    }

    // Multi Dimensional Array
    int n_arr[3][2] = {{1,2},{4,5},{6,7}};
    for(int i = 0;i<3;i++){
        for(int j = 0; j<2;j++){
            printf("The value of %dth row is %d\n",i+1,n_arr[i][j]);
        }
    }

    

    return 0;
}