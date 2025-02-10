//04 คำนวณเกรด โดยใช้ struct และ array
#include <stdio.h>
#include <string.h>

typedef struct {
    char id[11];
    char grade;
    int mid_score;
    int fin_score;
} student;

char calGrade(int mid, int fin) {
    int t_score = mid + fin;
    if(t_score < 50) {
        return 'F';
    } else if(t_score >= 50 && t_score <= 59) {
        return 'D';
    } else if(t_score >= 60 && t_score <= 69) {
        return 'C';
    } else if(t_score >= 70 && t_score <= 79) {
        return 'B';
    } else {
        return 'A';
    }
}

int main() {
    int mid_grade, fin_grade;
    student list[5];
    char tmp[11];
    for(int i = 0; i < 5; i++) {
        printf("Enter Student ID: ");
        scanf("%s", tmp);
        strcpy(list[i].id, tmp);
        printf("Enter Student Midterm: ");
        scanf("%d", &list[i].mid_score);
        printf("Enter Student Final: ");
        scanf("%d", &list[i].fin_score);
    }
    for(int i = 0; i < 5; i++) {
        printf("Student ID %s receives grade %c.\n", list[i].id, calGrade(list[i].mid_score, list[i].fin_score));
    }

    return 0;
}