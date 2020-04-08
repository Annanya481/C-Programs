/* Keshav and Kishore are holding some cards in their hands. They are numbered.
Risha will tell one number. Your job is to search the card that Risha told. 
If that card is not found then display a nameboard carrying a mgg no. not found.
Else display a mgg no. found.*/

#include<stdio.h>
int main()
{
    int len, A[10], num, flag=0;
    scanf("%d", &len);
    int i;
    for(i=0; i<len; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &num);
    for(i=0; i<len; i++)
    {
        if(A[i]==num)
          flag=1;
    }
    if(flag==1)
      printf("The number is found");
    else
      printf("The number is not found");
    return 0;
}