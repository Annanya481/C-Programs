/* Chef has a sequence of N numbers. He like a sequence better if it contains
his favorite sequence as a substring. 
Given the sequence and his favorite sequence check whether the favorite sequence 
is contained in the sequence.*/

#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T>0)
    {
        T--;
        int n;
        scanf("%d", &n);
        int N[n], i;
        for(i=0; i<n; i++)
        {
            scanf("%d", &N[i]);
        }
        int f;
        scanf("%d", &f);
        int F[f], j;
        for(i=0; i<f; i++)
        {
            scanf("%d", &F[i]);
        }
        int flag=0;
        for(i=0, j=0; i<n && j<f; i++)
        {
            if(N[i]==F[j])
            {
                flag++;
                j++;
                if(flag==f)
                {
                    break;
                }
            }
        }
        if(flag==f)
          printf("Yes\n");
        else
          printf("No\n");
    }
    return 0;
}