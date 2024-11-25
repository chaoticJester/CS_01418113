//GPA Calculator
#include <stdio.h>

int main() {
    float preGrade = 1.75;
    int preCredit = 21;
    int credit = 19;
    float requiredGrade = 2.00;
    //--------------
    int totalC = preCredit + credit;
    float totalP_1 = preGrade * preCredit;
    float neededGPA = ((requiredGrade * totalC) - totalP_1) / credit;

    printf("The GPA this semester should be %.2f", neededGPA);
    //--------------
    return 0;
}