#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    float salary;
    char name[20];
};

void show(struct employee emp){
    printf("Employee id is %d\n",emp.id);
    printf("Employee salary is %.3f\n",emp.salary);
    printf("Employee name is %s\n",emp.name);
}

int main(){

    // Declaring e and pointer
    struct employee e;
    struct employee *ptr;

    // Set address of e in pointer 
    ptr = &e;

    // Set value of e using pointer
    (*ptr).id = 1000;  // We can add value through pointer
    ptr->salary = 1212121.2; // Arrow Operator (shorthand property of previous)
    strcpy(ptr->name,"Boss");

    // Function call
    show(e);
    
    return 0;
}