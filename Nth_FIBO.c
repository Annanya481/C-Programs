/* John played with Jacob. John wanted to test how soon Jacob will answer
for his question. He told him one number. The job of John is to add the
numbers 0 and 1 initially and to add that o/p with 1. Now Jacob gets 
another o/p. Jacob has to add this current o/p with previous o/p. This
action has to be repeated upto certain times. After this Jacob needs to write
those o/p as a series starts from 0, 1 and to find out the nth number of 
that series what John told. Write a code for this. */

#include<stdio.h>
int main()
{
    int limit, ct=0, a=0, b=1, c, sum=0;
    scanf("%d", &limit);
    for(ct=0; ct<limit-1; ct++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    printf("%d", c);
    return 0;
}