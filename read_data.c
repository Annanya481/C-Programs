/* Alexey is trying to develop a program for very simple microcontroller.
It makes readings from various sensors over time, and these readings
must happen at specific regular times. Unfortunately, if two of these
readings occur at the same time, the microcontroller freezes and must be reset.
There are N different sensors that read data on a regular basis. For each i
from 1 to N, the reading from sensor i will occur every Ai ms with the
first reading occuring exactly Ai ms after the mc is powered up. Each
reading takes precisely 1ms on Alexey's mc. Alexey wants to know when
the mc will freeze after he turns it on.*/

#include<stdio.h>
int main()
{
    int t, n, i, flag;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        long a[n], time;
        scanf("%ld", &a[0]);
        time = a[0];
        for(i=1; i<n; i++)
        {
            scanf("%ld", &a[i]);
            if(a[i]<time)
              time = a[i];
        }
        flag = 0;
        while(flag!=2)
        {
            flag = 0;
            for(i=0; i<n; i++)
            {
                if(time%a[i]==0)
                  flag++;
                if(flag==2)
                  break;
            }
            if(flag!=2)
              time++;
        }
        printf("%ld\n", time);
    }
    return 0;
}