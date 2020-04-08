/* Pooja would like to withdraw X $US from an ATM. The cash machine will
only accept the transaction if X is a multiple of 5, and Pooja's account 
balance has enough cash to perform the withdrawal transaction(including
bank charges). For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.*/

#include<stdio.h>
int main()
{
    int withdrawl_amt;
    float initial_bal;
    scanf("%d %f", &withdrawal_amt, &initial_bal);
    if(withdrawal_amt%5==0 && (initial_bal>withdrawal_amt+5))
    {
        printf("%0.1f", (initial_bal-(withdrawal_amt+0.5)));
    }
    else
    {
        printf("0.1f", initial_bal);
    }
    return 0;
}