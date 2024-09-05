
#include <stdio.h>

int main() {
    float basicSalary, grossSalary, DA, HRA;

  
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    DA = 0.40 * basicSalary;

    
    HRA = 0.20 * basicSalary;

    
    grossSalary = basicSalary + DA + HRA;

    
    printf("Gross Salary = %.2f\n", grossSalary);

}
