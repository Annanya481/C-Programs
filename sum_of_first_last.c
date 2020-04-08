/* If give an integer N, WAP to obtain the sum of first and last digit of
this number. The first line contains an integer T, total number of test 
cases. Then follow T lines, each line contains an integer N. Display the sum
of first and last digit of N.*/

#include<stdio.h>
int sum_of_digits(int num)
{
    int firstDigit, lastDigit, sum=0;
    lastDigit = num%10;
    firstDigit = num;
    while(num>=10)
    {
        num/=10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    return sum;
}
int main()
{
    int cases, n, op, i=1;
    scanf("%d", &cases);
    while(i<=cases)
    {
        scanf("%d", &n);
        op = sum_digits(n);
        printf("%d", op);
        i++;
    }
    return 0;
}