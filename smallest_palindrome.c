/* An integer is said to be a palindrome if its value is the same when read from both the
from the right and left side. For a given positive integer X, WAP that 
outputs the value of the smallest palindrome greater than X.*/

#include<stdio.h>
int check_pal(int num)
{
    int t=num, rev=0;
    while(t!=0)
    {
        rev *= 10;
        rev += (t%10);
        t /= 10;
    }
    if(rev==num)
      return 1;
    else
      return 0;
}
int main()
{
    int X, i;
    scanf("%d", &X);
    i = X + 1;
    while(1)
    {
        if(check_pal(i)==1)
           break;
        i++;
    }
    printf("%d", i);
    return 0;
}