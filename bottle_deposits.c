/* In many jurisdictions a small deposit is added to drink containers
to encourage people to recycle them. In one particular jurisdcition, drink
containers holding one litre or less have a 0.10 deposit and drink containers
holding more than one litre have a 0.25 deposit.
WAP that reads the number of containers of each size from user. Your program
should continue by computing and displaying the refund thatwill be received 
for returning these containers. Format the output so that it includes a
rupees and always displays exactly two decimal places.*/

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float refund = (a*0.10) + (b*0.25);
    printf("Refund: %0.2f", refund);
    return 0;
}