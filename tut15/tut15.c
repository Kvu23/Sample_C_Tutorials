/* sample scripts */
#include <stdio.h>
#if 1
void digits(long long *n)
{
    int count = 0;
    int number = *n;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("number of digits are %d\n", count);
}

int main()
{
    long long n;
    // int count = 0;

    printf("please enter any number:");
    scanf("%lld", &n);
    digits(&n);
    /*while(n!=0)
    {
        n = n /10;
        count++;
    }
    printf("number of digits are %d\n",count);*/
    return 0;
}
#endif
#if 0
void slogan()
{
    printf("only he men uses c languages");
}
int main()
{
    void slogan();
    int c = 5;
    c = slogan(); // not allowed here
    printf("%d\n", c);
    return 0;
}
#endif
#if 0
int main()
{
    char *p = NULL;
    *p = 'a'; // this will lead to segmentations faults this operation is not allowed here
    printf("value in pointer is %c\n", *p);
    return 0;
}
#endif
