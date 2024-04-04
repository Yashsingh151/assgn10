#include<stdio.h>
#include<string.h>

enum PayType {
    HOURLY, 
    SALARY
};

struct Employee {
    int id;
    char name[50];
    union EmpDetails{
        float hourlyWage;
        double fixedSalary;
        enum PayType pt;
    } detail;
} emp;

int main() {

    emp.id = 12345;
    strcpy(emp.name, "Anurag Verma");

    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    emp.detail.hourlyWage = 15.50;
    printf("Hourly wage: %.2f\n", emp.detail.hourlyWage);
    emp.detail.pt = HOURLY;
    printf("Pay Type: %s\n", emp.detail.pt == HOURLY ? "HOURLY" : "SALARY");

    return 0;
}