/* Mr. Right is an English teacher, his task is to calculate a student's
result based on input of two examinations, one sport event and three
activities conducted. PLease help himfind the result of every individual
section according to weightage provided by principalthat results to 
exam_percent, sports percent, acivities percent and finally total percent
that sums all individual results with following conditions met:
ACTIVITES WEIGHTAGE: 30
SPORTS WEIGHTAGE: 20
EXAMS WEIGHTAGE: 50
Total-
EXAMS TOTAL: 200
ACTIVITIES TOTAL: 60
SPORTS TOTAL: 50*/

#include<stdio.h>
int main()
{
    float e1, e2;
    scanf("%f %f", &e1, &e2);
    float e_perc = ((e1+e2)*50)/200;
    float s;
    scanf("%f", &s);
    float s_perc = (s*20)/50;
    float a1, a2, a3;
    scanf("%f %f %f", &a1, &a2, &a3);
    float a_perc = (a1+a2+a3)/3;
    printf("Result:\n");
    printf("Total percent in examination: %0.2f\n", e_perc);
    printf("Total percent in activities: %0.2f\n", a_perc);
    printf("Total percent in sports: %0.2f\n", s_perc);
    float total = (e_perc + a_perc + s_perc);
    printf("Total percentage: %0.2f\n", total);
    return 0;
}