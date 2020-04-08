/* Raju and Smirthi are classmates. Smirthy will be class topper for all times.
This time Raju tried to get more in all the subjects. The topper will be
decided based on the total value. Your task is to choose the large total
value. */

#include<stdio.h>
int main()
{
    int R, S;
    scanf("%d %d", &R, &S);
    if(R>S)
      printf("%d", R);
    else
      printf("%d", S);
    return 0;
}