#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int id;
    float salary;
    char name[20];
}empl;

void show(empl emp){
    printf("Employee id is %d\n",emp.id);
    printf("Employee salary is %.3f\n",emp.salary);
    printf("Employee name is %s\n",emp.name);
}

int main(){
    // typedef - It is used to give short name of structure so that we cannot write big names many times
    empl e = {10,110000,"Anthony"};
    show(e);
    
    return 0;
}