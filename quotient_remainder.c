/* WAP to find quotient and remainder for given dividend and divisor*/

#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", num1/num2);
    printf("%d", num1%num2);
    return 0;
}