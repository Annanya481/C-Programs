/* Ram needs to arrange the numbers in order. It should be in triangle shape.
Help him arrange the numbers after giving the number of rows.*/

#include<stdio.h>
int main()
{
    int rows, i, j=1;
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        int ct=1;
        while(ct<=i)
        {
            printf("%d", j);
            j++;
            ct++;
        }
        printf("\n");
    }
    return 0;
}