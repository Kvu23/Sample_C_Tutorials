/*
 * tut11.c - C language feature demonstrations (interview snippets)
 *
 * Description:
 *   This file contains multiple small C code snippets, often used in interview
 *   settings to demonstrate specific language behaviors. Each snippet is
 *   typically enclosed in `#if 0` / `#if 1` preprocessor directives, allowing
 *   individual sections to be compiled and tested.
 *   The currently active section demonstrates the behavior of `#define` and
 *   `#undef` preprocessor directives across different functions.
 *
 * Usage:
 *   Compile: gcc tut11.c -o tut11
 *   Run: ./tut11
 *   (Note: To test other snippets, change their `#if 0` to `#if 1` and vice-versa.)
 */
#include <stdio.h>
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
void foo1(){
#undef a
#define a 20
} void foo2(){
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
