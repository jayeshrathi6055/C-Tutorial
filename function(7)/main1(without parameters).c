#include <stdio.h>

// Method 1 - Declaring function on top of the main
void display(){  // function definition
    printf("Something is displaying you.\n");
}

// Method 2 - Declaring function bottom of the main
void wish();  // function prototype

int main(){
    display(); // function calling
    wish(); // function calling
    return 0;
}

void wish(){  // function definition
    printf("Good Morning Buddy\n");
}