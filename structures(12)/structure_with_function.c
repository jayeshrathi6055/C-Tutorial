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

    struct employee e = {10,110000,"Anthony"};
    show(e);
    
    return 0;
}