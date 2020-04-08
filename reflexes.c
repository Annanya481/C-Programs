/* You are given a string. Your task is to find the sum of the palindrome
degrees of all its prefixes.*/

#include<stdio.h>
char s[500];
int h[500];
conts int M=3;
int main()
{
    scanf("%s", s);
    int a=0, b=0, p=1, v=0, i;
    for(i=0; s[i]; ++i)
    {
        a = a*M+s[i], b+=s[i]*p, p*=M;
        if(a==b)v+=(h[i+1]=h[(i+1)>>1]+1);
    }
    printf("%d\n", v);
    return 0;
}