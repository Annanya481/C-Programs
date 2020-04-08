/* Can you help Manju to identify the result of the following problem?
Manju's maths teacher first give the limit. Manju has to generate numbers 
between the limit which are divisible by 2. At the same time, the numbers
should not be divisible by 3 and 5*/

#include<stdio.h>
int main()
{
    int lim1, lim2, i;
    scanf("%d %d", &lim1, &lim2);
    for(i=lim1+1; i<lim2; i++)
    {
        if((i%2==0)&&(i%3==0)&&(i%5==0))
          printf("%d\n", i);
    }
    return 0;
}