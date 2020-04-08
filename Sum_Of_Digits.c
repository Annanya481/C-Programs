/* You are given an integer N. WAP to calculate the sum of all digits of N*/

#include<stdio.h>
int sum_of_digits(int num)
{
    int sum;
    while(num>0)
    {
        sum += num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    int T, i, sum, num;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d", &num);
        sum =  sum_of_digits(num);
        printf("%d\n", sum);
    }
    return 0;
}