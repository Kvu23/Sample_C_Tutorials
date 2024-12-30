/*program to print fibonacci series using functions*/
#include <stdio.h>

long int fibo(int n);

int main()
{
    int n;
    long int i;
    long int fibo(int n);
    printf("Enter the limit:\n");
    scanf("%d", &n);
    i = fibo(n);
    printf("\nThe %dth Fibonacci number is %ld\n\n", n, i);
    return 0;
}

long int fibo(int n)
{
    int old_no, currnt_no, sum, i;
    i = 1;
    old_no = 0;
    currnt_no = 1;
    printf("Fibonacci series is: \n");
    while (i <= n)
    {
        sum = old_no + currnt_no;
        old_no = currnt_no;
        currnt_no = sum;
        i++;
        printf(" %d", sum);
    }
    return (sum);
}
