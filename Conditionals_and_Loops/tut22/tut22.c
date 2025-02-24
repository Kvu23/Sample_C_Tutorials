/*Sample program to calculate credit balance*/
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /* code */
    float beginning_balance, total_charges, total_credits, credit_limit, new_balance;
    int account_number = 0;
    bool flag = 1;
    // printf("Enter account number -1 to end: ");
    // scanf("%d", &account_number);

    while (flag == 1 && account_number != -1)
    {
        printf("Enter account number -1 to end: ");
        scanf("%d", &account_number);

        if (account_number == -1)
        {
            flag = 0;
            break;
        }
        else
        {
            printf("Enter beginning balance: ");
            scanf("%f", &beginning_balance);
            printf("Enter total charges: ");
            scanf("%f", &total_charges);
            printf("Enter total credits: ");
            scanf("%f", &total_credits);
            printf("Enter credit limit: ");
            scanf("%f", &credit_limit);

            new_balance = beginning_balance + total_charges - total_credits;

            if (new_balance > credit_limit)
            {
                printf("Account number is %d\n", account_number);
                printf("Credit limit is %.2f\n", credit_limit);
                printf("Balance is %.2f\n", new_balance);
                printf("Credit limit exceeded\n");
            }
            else
            {
                ;
            }
        }
    }

    return 0;
}
