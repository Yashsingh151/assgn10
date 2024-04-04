#include<stdio.h>
#include<string.h>

struct Employee {

    int id;
    char name[50];
    
    union EmpDetails {
        float hourlyWage;
        double fixedSalary;
    } detail;

} emp;

int main() {

    emp.id = 12345;
    strcpy(emp.name, "Yash singh");
    emp.detail.hourlyWage = 15.50;

    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Hourly Wage: %.2f\n", emp.detail.hourlyWage);

    emp.detail.fixedSalary = 150;
    printf("Fixed Salary: %.2f\n", emp.detail.fixedSalary);

    return 0;
};