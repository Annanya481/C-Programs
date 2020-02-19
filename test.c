#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        int N, A, B, C, ct=0;
        scanf("%d %d %d %d", &N, &A, &B, &C);
        for(int i=0; i<=A; i++)
        {
            for(int j=0; j<=B; j++)
            {
                for(int k=0; k<=C; k++)
                {
                    if((i+j+k)<=N)
                    {
                        ct++;
                    }
                }
            }
        }
        printf("%d", ct);
    }
    return 0;
}