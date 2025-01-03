/*sample interview programs */

#include <stdio.h>
#include <string.h>
#if 1
int main()
{
	int x,y=10;
	char z= 'a';
	x= y+z;
	printf("%d \n",x);
	return 0;
}
#endif
#if 0 // not get
int main()
{
	int a[3] = {1,2,3};
	int *p=a;
	printf("%p\n%p",p,a);
	return 0;
}
#endif
#if 0 // not get
void foo(int *p)
{
	int j = 2;
	p = &j;
	printf("%d\n",*p);
}
int main()
{
	int i=97;
	int *p = &i;
	foo(&i);
	printf("%d\n",*p);
	return 0;
}
#endif
#if 0 // not get
int check(int i,int j)
{
	int *p,*q;
	p=&i;
	q=&j;
	i>= 45?return(*p):return(*q);
}
int main()
{
	int c= check(10,20);
	printf("%d\n",c);
	return 0;
}
#endif
#if 0 // not get
void display()
{
	int count =10;
	count++;
	printf("%d ",count);
}
int main()
{
	display();
	display();
	display();
	return 0;
}
#endif
#if 0
int main()
{
	printf("%lu",sizeof(long long));
	return 0;
}
#endif
#if 0 // not get
int reverse(int no);
int main()
{
	int no = 5;
	reverse(no);
	return 0;
}
int reverse(int no)
{
	if(no == 0)
		return 0;
	else
		printf("%d ",no);
	return (no--);
}
#endif
#if 0 // not get
int fun (int i)
{
	return (i++);
}
int main()
{
	int i = fun(10);
	printf("%d\n",--i);
	return 0;
}
#endif
#if 0
int main()
{
	int a=5,b=10,c=1;
	if(a && b >c)
		printf("emertxe\n");
	else
		break;//cant use break in if else
	return 0;
}
#endif
#if 0 // not get
int main()
{
	printf("C programming %s","Class by\n%s Emertxe","WOW");
	return 0;
}
#endif
#if 0
void foo(int *);
int main()
{
	int i=10;
	foo((&i)++);//lvalvue required here
}
void foo(int *)
{
	int *p;
	printf("%d\n",*p);//declaration of p is not done here
}
#endif
#if 0 // not get
void foo(int *);
int main()
{
	int i=10, *p = &i;
	foo(p++);
	return 0;
}
void foo(int*p)
{
	printf("%d \n",*p);
}
#endif
#if 0
void f()
{
	printf("hi");
}
int main()
{
	int a=10;
	void f();
	a = f();//cant assign value returning from function
	printf("%d\n",a);
	return 0;
}
#endif
#if 0
int main()
{
	printf("%d %d",sizeof("hello"),strlen("hello"));
	return 0;
}
#endif
#if 0
int main()//not get
{
	char *a = "Emertxe";
	printf(a);
	return 0;
}
#endif
#if 0
int main()//not get
{
	static int i;
	for(++i;++i;++i)
	{
		printf("%d ",i);
		if(i == 4)
			break;
	}
	return 0;
}
#endif
#if 0
int main()
{
	int x=0;
	if(x==0)
		printf("hii\n");
	else
		printf("hello\n");
		printf("how are you\n");
		
		return 0;
}
#endif
#if 0
int main()
{
	void foo();
	printf("1 ");
	foo();
	return 0;
}
void foo()
{
	printf("2");
}
#endif
#if 0
int main()//not get
{
	int x;
	for(x=0;x++; );
		printf("%d",x);
		return 0;
}
#endif
#if 0
int main()//not get
{
	int a = 0x00000000;
	int b = 0x00000008;
	
	if( (a&b) || (a=b=0) )
		printf("hello a = %d, b = %d\n",a,b);
		
	printf("hello a = %d, b = %d\n",a,b);
	return 0;
}
#endif
#if 0
int main()//not get
{
	printf("%d\t",sizeof(6.5));
	printf("%d\t",sizeof(9000));
	printf("%d\t",sizeof('A'));
	return 0;
}
#endif
#if 0
int main() //not get
{
	int a=10,b=2,c=3,x;
	x = a + -b++ + c;
	printf("%d\n",x);
	return 0;
}
#endif
#if 0
int main()
{
	switch(6)
	{
		case 6.0f://only accepts integer values	
					printf("hello\n");
					break;
		case 6.0:	
					printf("world\n");
					break;
		case 6.0L:	
					printf("emertxe\n");
					break;
		default:	
					printf("technologies\n");
					break;
	}
	return 0;
}
#endif
#if 0
int main()
{
	int a=5,b=10,c=1;
	if(a && b > c)
		printf("Emertxe");
	else
		break;// cant use break in if else condition
	return 0;
}
#endif
#if 0
int main()
{
	char a = 250 ;
	int expr;
	expr = a + !a + a + ++a;
	printf("%d",a);
	return 0;
}
#endif
#if 0
int main()//not get
{
	char a,b,c;
	a = 100;
	b = 100;
	c = a+b;
	
	printf("%d",c);
	return 0;
}
#endif
#if 0
int main()//for bracket it consider last value
{
	int a = 1,3,15;//without bracket consider first
	int b = (2,4,6);
	printf("%d",a+b);
	return 0;
}
#endif
#if 0
int main()
{
	int a=10;
	
		for( ; ;);
			printf("%d ",a);
	return 0;
}
#endif
#if 0
int main()//not get
{
	int a,b,c,d,e,f,g,h,k;
	a=8,b=3,c=2,d=3,e=2,f=11;
	printf("%d\n", a-b ||  (a-b*c) + d && e-f%3);
	return 0;
}
#endif
#if 0
int main()
{
	int a=100;
	
	if(a>10)
		printf("saina nehwal\n");
	else if(a>20)
		printf("jwala gutta\n");
	else if(a>30)
		printf("sania mirza\n");
		
	return 0;
}
#endif
#if 0
int main()//not get
{
	int a = -12;
	a = a>>3;
	printf("%d",a);
	
	return 0;
}
#endif
#if 0
int main()//not get
{
	char c= 280;
	switch(c)
	{
		case 280:
					printf("280");
					break;
		case 24:
					printf("24");
					break;
		default:
					printf("surprises");
					break;
	}
	return 0;
}
#endif
#if 0
int main()//not get
{
	int a=-60,b=-34;
	unsigned int c=-24;
	printf("%d\n",c);
	return 0;
}
#endif
#if 0
int main()//not get
{
	int x=10;
	x = ~(x-1);
	printf("%d\n",x);
	return 0;
}
#endif
#if 0
int main()//not get
{
	int a = 0x00000000;
	int b = 0x00000008;
	
	if( (a&b) || (a=b=0) )
		printf("hello a = %d, b = %d\n",a,b);
		
	printf("hello a = %d, b = %d\n",a,b);
	return 0;
}
#endif
#if 0
int main()
{
	int i = 3;
	switch(i)
	{
			case '3':
						printf("hello");
						break;
			case 3:
						printf("hello world");
						break;
			default:
						printf("terminated");
						break;
	}
	return 0;
}
#endif
#if 0
int main()
{
	int i = 0;
	do
	{
		i++;
		if(i == 2)
			continue;
			printf("in while loop ");
	}while(i<2);
	printf("%d\n",i);
	return 0;
}
#endif
#if 0
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		int i = 100;
		i--;
		printf("%d ",i);
	}
	return 0;
}
#endif
#if 0
int main()
{
	int x = 10,y= 15;
	int a,b;
	a = x++;
	b = ++y;
	printf("%d %d",a,b);
	return 0;
}
#endif
#if 0
int main()
{
	int x;
	for(x=0;x++; );
		printf("%d",x);
		
	return 0;
}
#endif
#if 0
int main()
{
    int x = 5, y = 10;
    (x ^= y), (y ^= x), (x ^= y); 
    printf("After Swapping values of x and y are %d %d",
            x, y);
    return 0;
}
#endif
#if 0
void foo(void)
{
	int a=42;
	a=a++;
	printf("%d\n",a);
}

int main()
{
	foo();
	return 0;
}
#endif
#if 0
int main()
{
	int a,b;
	a= (-3)--(25);//lvalue required here
	b -3--(-3);
	printf("a= %d b= %d \n",a,b);
	return 0;
}
#endif
#if 0
int main()
{
	int i = 5,y=6,z,v[10] ={1,12,45,7,8,3,67,8,10,11};
	//i = i++ * ++i;
	//i = ++i + i++;
	//i = ++i + ++i;
	//i = v[i++];
	//i= v[++i];
	//i = i++ +1;
	//i = ++i + 1;
	//++++i;
	z = i++ + y++;
	printf("%d",z);
	return 0;
}
#endif
