/* There is a mysterious temple in Mysteryland. The door of the temple is always
closed. It can only be opened by a unique procedure. There are 2 boxes and N items
outside the temple. Sherlock visits the temple many times. Each time Sherlock 
visits the temple, the no. of items N outside the door of temple is changed but
each time he manages to know the cost. The door can only be opened if those 
items can be distributed by cost equally b/w the 2 boxes.*/

#include<stdio.h>
int main()
{
    int T, N, i, A[100], b, f=1, sum=0, s=0;
    scanf("%d", &T);
    while(T>0)
    {
        scanf("%d", &N);
        i=0;
        while(i<N)
        {
            scanf("%d", &A[i]);
            i++;
        }
        i=0;
        while(i<N)
        {
            sum = sum+A[i];
            i++;
        }
        if(sum%2!=0)
          f=0;
        else
        {
            i=0;
            b=sum/2;
        }
        while(i<N)
        {
            if(A[i]==b)
            {
                f=1;
                break;
            }
            else if(A[i]>b)
            {
                f=0;
                break;
            }
            else
            {
                if((s+A[i])<=b)
                {
                    s=s+A[i];
                    if(s==b)
                    {
                        f=1;
                        break;
                    }
                }
            }
            i++;
        }
    }
    if(f==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    f=1; 
    sum=0;
    s=0;
    T--;
}
return 0;
}