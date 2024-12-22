/*Sample bitwise operator programs*/

#include <stdio.h>
#if 1
int main()
{
    int tmp, i, number, pos;
    printf("\n please enter your number:  ");
    scanf("%d", &number);
    printf("\n printing 32 bit represent of %d\n\n", number);
    for (i = 31; i >= 0; i--)
    {
        tmp = number >> i;
        (tmp & 1) ? printf("1") : printf("0");
    }
    /* setting bits at certain positions */

    printf("\n enter the position of bit you want to set:  ");
    scanf("%d", &pos);
    printf("\n");
    number = number | 1 << pos;
    printf("\n");
    for (i = 31; i >= 0; i--)
    {
        tmp = number >> i;
        (tmp & 1) ? printf("1") : printf("0");
    }
    printf("\n decimal equivalent of after setting bit is %d\n", number);
    /* clear bit at certain positions */
    printf("\n enter the position of bit you want to clear:  ");
    scanf("%d", &pos);
    printf("\n");
    number = number & ~(1 << pos);
    printf("\n");
    for (i = 31; i >= 0; i--)
    {
        tmp = number >> i;
        (tmp & 1) ? printf("1") : printf("0");
    }
    printf("\n decimal equivalent of after clearing bit is %d\n", number);
    /* toggling a bit at certain positions */
    printf("\n enter the position of bit you want to toggle:  ");
    scanf("%d", &pos);
    printf("\n");
    number = number ^ (1 << pos);
    printf("\n");
    for (i = 31; i >= 0; i--)
    {
        tmp = number >> i;
        (tmp & 1) ? printf("1") : printf("0");
    }
    printf("\n decimal equivalent of after toggling bit is %d\n", number);
    /* checking bits value */
    printf("\n enter the position of bit you want to check:  ");
    scanf("%d", &pos);
    printf("\n");

    if ((number = (number >> pos) & 1) == 1)
    {
        printf("\n bit at %d is set\n", pos);
    }
    else
    {
        printf("\n bit at %d is not set\n", pos);
    }
    printf("\n");
    // printf("\n decimal equivalent of after clearing bit is %d\n",number);
    return 0;
}
#endif
#if 0
/* get bits and n bits from positions */
int main()
{
	int start,end,mask,i,number,n,tmp,bit;
	
	printf("\n please enter the number: ");
	scanf("%d",&number);
	
	for(i=31;i>=0;i--)
	{
		tmp = number>>i;
		(tmp & 1) ? printf("1"):printf("0");
	}
	printf("\n please enter starting positions:  ");
	scanf("%d",&start);
	printf("\n please enter ending positions:  ");
	scanf("%d",&end);
	
	mask = ~(~0 << (end-start +1));
	bit = (number>>start) & mask;
	for(i=31;i>=0;i--)
	{
		tmp = bit>>i;
		(tmp & 1)?printf("1"):printf("0");
	}
	printf("\ndecimal equivalent of bit is  %d\n",bit);
	return 0;
}
#endif
#if 0
/*set n bits */
int main()
{
	int i,tmp,number,value,mask1,mask2,start,end,result;
	printf("\n please enter your number:  ");
	scanf("%d",&number);
	
	for(i=31;i>=0;i--)
	{
		tmp = number>>i;
		(tmp & 1) ? printf("1"):printf("0");
	}
	
	printf("\n please enter your value:  ");
	scanf("%d",&value);
	
	for(i=31;i>=0;i--)
	{
		tmp = value>>i;
		(tmp & 1) ? printf("1"):printf("0");
	}
	
	printf("\n please enter starting positions:  ");
	scanf("%d",&start);
	printf("\n please enter ending positions:  ");
	scanf("%d",&end);
	mask1 = number & (~0 << (end-start+1));
	mask2 = value & ~(~0 <<(end-start +1));
	
	result = mask1 | mask2;
	for(i=31;i>=0;i--)
	{
		tmp = result>>i;
		(tmp & 1) ? printf("1"):printf("0");
	}
	printf("\ndecimal equivalent of bit is  %d\n",result);
	return 0; 
}
#endif
#if 0
unsigned setbits(unsigned x,int p,int n,unsigned y);
int main(void)
{
    printf("%u",setbits((unsigned)12,3,2,(unsigned)57));
}

unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return x & ~(~(~0 << n) << (p+1-n)) | ( y & ~(~0<<n)) << (p+1-n);
}
#endif
