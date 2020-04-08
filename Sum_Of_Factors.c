/* Dolu has a homework to find the sum of factors of a given number. Use
C language to solve this problem.*/

#include<stdio.h>
int main()
{
    int num, sum=0, i;
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            printf("%d", i);
            sum += i;
        }
    }
    printf("\nSum=%d", sum);
    return 0;
}