//Tax Calculation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char salary_in[100];
    float salary;
    float payment;

    fgets(salary_in, 100, stdin);
    salary = atof(salary_in);

    if(salary < 0) {
        printf("Error: Salary must be greater or equal to 0");
    } else {
        if(salary <= 300000.00) {
            payment = salary * 0.05;
        } else {
            payment = (300000.00 * 0.05) + ((salary - 300000.00) * 0.1);
        }
        printf("%.2f", payment); 
    }

    return 0;
}