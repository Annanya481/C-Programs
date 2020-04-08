/* Andrewid and Android is a galaxy-famous detective. In his free time he
likes to think about strings containing zeroes and ones. Once he thought
about a string of length n consisting of zeroes and ones. Consider the 
following operation: we choose any two adjacent positions in the string and
if one of them contains 0, and the other contains 1, then we are allowed to
remove these 2 digits from the string, obtaining a string of length n-2 as a
result. Now Andreid thinks about what is the minimum length of the string 
that can remain after applying the described operation several times(possibly
zero)? Help him to calculate this number. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int len, c1=0, c0=0, i;
    char c[20000];
    scanf("%d", &len);
    scanf("%s", c);
    for(i=0; i<len; i++)
    {
        if(c[i]==1)
           c1++;
        else
           c0++;
    }
    printf("%d", abs(c1-c0));
    return 0;
}