/* In Berland it is the holiday of equality. In honor of the holiday the king
decided to equalize the welfare of all citizens in Berland by the expense of the
state treasury. 
Totally in Berland there are n citizens, the welfare of each of them is estimated
as the integer in burles.
You are the royal treasurer which needs to count the minimum charges of kingdom 
on king's present. The king can only give away money, he hasn't the power to
take away them.*/

#include<stdio.h>
int main()
{
    int n, A[10];
    scanf("%d", &n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    int max=0;
    for(i=0; i<n; i++)
    {
        if(A[i]>max)
           max = A[i];
    }
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum += (max - A[i]);
    }
    printf("%d", sum);
    return 0;
}