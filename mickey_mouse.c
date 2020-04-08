/* Mickey and Miney are two friends. Goofy was one of Mickey's enemy. He
was jealous of Mickey because the latter was liked by everyone. One day Mickey
and Miney went on a trip. Goofy planned to kidnap Miney. He kidnapped Miney
and kept her in one of the hot balloons tied up to a height. There were 50
hot balloons numbered from one. Each balloon will fly to a certain height.
Only the numbers having 3 and 7 as it's factors can fly upto the height of
Miney's ballon. Mickey was confused and he didn't know which numbered balloon
can fly to Miney.
WAP to help Mickey find the balloon.*/

#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num%3==0 && num%7==0)
    {
        printf("The balloon can fly to Miney");
    }
    else
    {
        printf("The balloon cannot fly to Miney")
    }
    return 0;
}