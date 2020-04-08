/* Ravi and Nirmala are classmates. Nirmala will be the class topper for all
the times. This time Raju tried to get more ina ll the subjects. The 
topper will be decided based on total value. Your task is to choose larger value.*/

#include<stdio.h>
int main()
{
    int m1, m2;
    scanf("%d %d", &m1, &m2);
    if(m1>m2)
      printf("%d", m1);
    else
      printf("%d", m2);
    return 0;
}