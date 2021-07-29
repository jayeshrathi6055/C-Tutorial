#include <stdio.h>
#include <string.h>

// Making structure of employee
struct employee{
    int id;
    float salary;
    char name[20];
};

int main(){
    // Structure - It is used to store different data types in a single variable------------->
    // Method 1---->
    struct employee e1;  // Initialize employee e1

    e1.id = 1;  // Adding value of employee id
    e1.salary = 100000; // Adding salary of employee
    strcpy(e1.name,"Jayesh Rathi"); // Adding name of the employee

    printf("The name of the employee is %s, salary is %.2f and his id is %d.\n",e1.name,e1.salary,e1.id);

    // We can also make structure of array - This is also valid
    struct employee company[10];
    company[0].id = 100;
    company[0].salary = 100000.100;
    strcpy(company[0].name,"Facebook");

    printf("The company name is %s, salary is %.2f and id of the company is %d.\n",company[0].name,company[0].salary,company[0].id);

    // Method 2------->
    struct employee google = {1000,201000,"Google"};
    printf("Google name is %s\n",google.name);
    printf("Google salary is %.2f\n",google.salary);
    printf("Google id is %d\n",google.id);

    return 0;
}