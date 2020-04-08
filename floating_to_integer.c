/* WAP to convert a floating point number into corresponding integer.*/

#include<stdio.h>
int main()
{
    int num2;
    float num;
    scanf("%f", &num);
    num2 = num;
    printf("The integer variant of %0.2f is = %d", num, num2);
    return 0;
}