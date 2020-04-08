/* Vishnu has a task to solve the following series. WAP to find the print:
1+(1+2)+(1+2+3)+(1+2+3+4)++n
It will help him solve this program.*/

#include<stdio.h>
int sum(int num)
{
    int sum=0, i;
    for(i=1; i<num; i++)
       sum+=i;
    return sum;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        printf("%d ", sum(i));
    }
    return 0;
}