/* Each Sunday, a newspaper agency sells x copies of a certain newspaper
for Rs. a per copy. The cost to the agency of each newspaper is Rs. b.
The agency pays a fixed cost for storage, delivery and so on of Rs. 100
per Sunday.
The newspaper agency wants to calculate the profit obtained on Sundays. 
Can you compute the profit given x, a, b.*/

#include<stdio.h>
int main()
{
    int x, a, b;
    scanf("%d", &x);
    scanf("%d", &a);
    scanf("%d", &b);
    int cp = x*a;
    int sp = (x*b) + 100;
    int profit = cp - sp;
    printf("The profit obtained is Rs %d", profit);
    return 0;
}