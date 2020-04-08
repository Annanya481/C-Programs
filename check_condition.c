/* In a country named Differenzia the minors and senior citizens are not
eligible to vote. Only people aged between 18 to 60 (both inclusive) are
eligible to vote. WAP to determine a person in Differenzia is eligible to
vote.*/

#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if(age>=18 && age<=60)
      printf("Eligible");
    else
      printf("Not Eligible");
    return 0;
}