/* these are the sample interview  programs asked in the huawei */
#include <stdio.h>
#if 0
int main()
{
	int a, b;
	if (a = 1, b = 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 1
void foo1();
void foo2();
#define a 10
int main()
{
    printf("%d\n", a);
    foo1();
    printf("%d\n", a);
    foo2();
    printf("%d\n", a);
    return 0;
}
void foo1()
{
#undef a
#define a 20
}
void foo2()
{
#undef a
#define a 31
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	int cnt = 0, x = 45;
	while (x)
	{
		cnt++;
		x = x & (x - 1);
	}
	printf("%d \n", cnt);
}

#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	int x = 20;
	printf("%d %d %d\n", x == 20, x = 15, x > 17);
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	int x=5;
	if(x=0)
	{
		return ;
	}
	printf("%d \n",x--);
	main();
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	char b[] = {1, 2, 3, 4, 5, 6, 7, 8};
	char *ptr;
	*ptr = (b + 1)[5];
	printf("%d ", *ptr);
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	char choise = 'A';
	switch(choise)
	{
		case 65:
			printf("am in case a\n");
			break;
		case 62:
			printf("am in case b\n");
			break;
		default:
			printf("am in case default\n");
			break;
	}
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	printf(3+"huwaitechnologies\n");
}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
int main()
{
	int *ptr = (int*)15;
	printf("%d \n",++*ptr);

}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0
#include <string.h>

int main()
{
	char *ptr = "abcdef";
	char *ptr1;
	ptr1 = ptr +(int )strlen(*ptr)-1;
	printf("%c\n",--*ptr1--);
	printf("%c\n",--*ptr1--);
	printf("%c\n",*ptr--);


}
#endif
//////////////////////////////////////////////////////////////////////////////
#if 0

int main()
{
	int  x = 5;

	if(x=0)
	{
		return 0;
	}
	printf("%d\n",x--);
	main();
}
#endif
///////////////////////////////////////////////////////////////////////////////
