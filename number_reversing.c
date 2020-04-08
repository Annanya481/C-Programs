/* Kamala's teacher give her mobile number in reverse order. She asks
Kamala to rearrange the number using C program. Now Kamala needs your help
to write a C code for reversing the number.*/

#include<stdio.h>
int main()
{
    int num, rev=0;
    scanf("%d", &num);
    while(num>0)
    {
        rev = rev*10 + num%10;
        num/=10
    }
    printf("%d", rev);
    return 0;
}