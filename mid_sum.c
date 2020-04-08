/* Sum of all numbers of the array except the highest and lowest element.*/

#include<stdio.h>
int main()
{
    int len, A[10], min=0, max=0;
    scanf("%d", &len);
    int i;
    for(i=0; i<len; i++)
    {
        scanf("%d", &A[i]);
    }
    int MAX=0;
    for(i=0; i<len; i++)
    {
        if(A[i]>MAX)
          MAX = A[i];
    }
    int MIN = MAX;
    for(i=0; i<len; i++)
    {
        if(A[i]<MIN)
          MIN = A[i];
    }
    int sum=0;
    for(i=0; i<len; i++)
    {
        if(A[i]==MIN)
          min++;
        else if(A[i]==MAX)
          max++;
    }
    if(min>1)
    {
        for(i=0; i<len; i++)
        {
            if((A[i]!=MAX)&&(A[i]!=MIN))
               sum+=A[i];
        }
        printf("%d", sum+MIN);
    }
    else if(max>1)
    {
        for(i=0; i<len; i++)
        {
            if((A[i]!=MAX)&&(A[i]!=MIN))
              sum+=A[i];
        }
        printf("%d", sum+MAX);
    }
    else
    {
        for(i=0; i<len; i++)
        {
            if((A[i]!=MAX)&&(A[i]!=MIN))
              sum+=A[i];
        }
        printf("%d", sum);
    }
    return 0;
}