/* George uncle taught a prime number is a natural number greater than 1 
that has no positive divisors other than 1 and itself. A natural number 
greater than 1 that is not a prime number is called a composite number. 
Guide George in writing a C code to find whether the number is PRIME or not.*/

#include<stdio.h>
int check_prime(int num)
{
    int flag=0, i;
    if(num==2)
       flag=0;
    else
    {
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
              flag=1;
        }
    }
    return flag;
}
int main()
{
    int num;
    scanf("%d", &num);
    int check = check_prime(num);
    if(check==0)
      printf("%d is a prime number", num);
    else
      printf("%d is not a prime number", num);
    return 0;
}