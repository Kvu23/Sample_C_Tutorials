/*These are the sample snippet programs and is type of MCQ programs */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
int main()
{
	int a= 100;
	printf("%d\n%d\n",++a,a++);
	return 0;
}
#endif
#if 1
int main()
{

    int m = 5, n = 10, q = 20;
    if (q / (n * m))
        printf("William Gates\n");
    else
        printf(" Warren Buffet\n");
    printf(" Carlos Slim Helu\n");
    return 0;
}
#endif
#if 0
int main()
{
    if(!printf("Mukesh Ambani"))
	if(printf(" Lakashmi Mittal"))
	return 0;
}
#endif
#if 0
int main(){
    if("ABC") printf("Barack Obama\n");
    if(-1)    printf("Hu Jintao\n");
    if(.92L)  printf("Nicolas Sarkozy\n");
    if(0)     printf("Ben Bernanke\n");
    if('W')   printf("Vladimir Putin\n");
    return 0;
}
#endif
#if 0
int main()
{
    if(0xA)
         if(052)
             if('\xeb')
                 if('\012')
                      printf("Tom hanks");
                 else;
             else;
         else;
    else;
    
    return 0;
}
#endif
#if 0
int main()
{
    int a=10;
    if(printf("%d",a>=10)-10)
         for(;;)
             break;
    else;
    return 0;
}
#endif
#if 0
int main()
{
    int a=5,b=10;
    if(++a||++b)
         printf("%d  %d",a,b);
    else
         printf("John Terry");
    return 0;
}
#endif
#if 0
int main()
{
    static int i;
    for(;;)
    if(i+++"The Matrix")
          printf("Memento");
    else
         break;
	return 0;
}
#endif
#if 0
int main()
{
    int x=1;
    if(x--)
         printf("The Godfather");
         --x;
    else
         printf("%d",x);
	return 0;
}
#endif
#if 0
int main()
{
    if('\0');
    else if(NULL)
         printf("cquestionbank");
    else;

	return 0;
}
#endif
#if 0
int main()
{
    int a=5,b=10;
    if(a<++a||b<++b)
         printf("%d  %d",a,b);
    else
         printf("John Terry");
	return 0;
}
#endif
#if 0
int main()
{
    int x=1,y=2;
    if(--x && --y)
         printf("x=%d  y=%d",x,y);
    else
         printf("%d %d",x,y);

	return 0;
}
#endif
#if 0
int main()
{
    signed int a=-1;
    unsigned int b=-1u;
    if(a==b)
         printf("The Lord of the Rings");
    else
         printf("American Beauty");

	return 0;
}
#endif
#if 0
int main()
{
    char c=256;
    char *ptr="Leon";
    if(c==0)                                
         while(!c)
             if(*ptr++)
                 printf("%+u",c);
             else
                 break;
	return 0;
}
#endif
#if 0
int main()
{
	int a=2;
    if(a--,--a,a)
         printf("The Dalai Lama");
    else
         printf("Jim Rogers");
        return 0;
}
#endif
#if 0
int main()
{
	int a = 5 % 3l;
	printf("%d\n",a);	
	return 0;
}
#endif
#if 0
int main()
{
	char *names[] = {"miller","jones","Andersion"};
	printf("%c\n",*(*(names+1)+2));
	printf("%c\n",names[1][2]);
	return 0;
}
#endif
#if 0
int main()
{
	int *p;
	printf("%d\n",p);
	return 0;
}
#endif
#if 0
int main()
{
	int a = 10,c;
	switch(c + 5)
	{
		case 15:
			printf("hello\n");
			break;
		default:
			printf("bye bye\n");
			break;
	}
	return 0;
}
#endif
#if 0
void msg()
{
	printf("hello how are you?\n");
	main();//recursive functions
}
int main()
{
	printf("hiii kaushik\n");
	msg();
	return 0;
}
#endif
#if 0
int main()
{
	int i = 3,*j;
	j = &i;s
	printf("address of i is %u\n",&i);
	printf("address of j is %u\n",&j);
	printf("value of i is %d\n",i);
	printf("value of j is %d\n",j);
	printf("value of i is %d\n",*(&i));
	printf("value of j is %d\n",*j);
	return 0;
}
#endif
#if 0
int main()
{
	int i = 3,*j,**k;
	j = &i;
	k = &j;
	printf("address of i is %u\n",&i);
	printf("address of i is %u\n",j);
	printf("address of i is %u\n",*k);
	printf("address of j is %u\n",&j);
	printf("address of j is %d\n",k);
	printf("address of k is %u\n",&k);
	printf("value of j is %d\n",j);
	printf("value of k is %d\n",k);
	printf("value of i is %d\n",i);
	printf("value of i is %d\n",*(&i));
	printf("value of i is %d\n",*j);
	printf("value of i is %d\n",**k);
	return 0;
}
#endif
#if 0
int sum(int x,int y)
{
	static int result;
	result = x + y;
	return result;
}
int main()
{
	int a,b,s;
	printf("emter value of a,b: ");
	scanf("%d %d",&a,&b);
	
	s = sum(a,b);
	printf("sum of %d and %d is: %d\n",a,b,s);
	return 0;
}
#endif
#if 0
int func(void)
{
	static int sum;
	int num;
	for(num = 1;num<=25;num++)
	{
		if((num % 2 != 0))
		{
			sum += num*num;	
		}	
	}	
	return sum;
}
int main()
{
	int sum=0;
	printf("sum of square of odd numbers is %d\n",func());
	return 0;
}
#endif
#if 0
int a;
int func1()
{
	a = 8;
	return a;
}
int func2()
{
	a = 10;
	return a;
}
int main()
{
	printf("in main a = %d\n",a);
	printf("in func1 a = %d\n",func1());
	printf("in func2 a = %d\n",func2());
	return 0;
}
#endif
#if 0
int main()
{
	char name[20];
	printf("enter Name: ");
	gets(name);
	printf("entered name is: ");
	puts(name);
	return 0;
}
#endif
#if 0
int main()
{
	char *p1 = "good";
	char *p2 = "good";
	
	if(p1 == p2)
		printf("same");
	else
		printf("not same");
		
	return 0;
}
#endif
#if 0
int main()
{
	printf("%u\n","good");
	printf("%u\n","good");
	
	if("bad" == "bad")
		printf("same");
	else
		printf("not same");
			
	return 0;
}
#endif
#if 0
struct student 
{
	char name[20];
	int rollno;
	int marks;
};
/*void display(char *name,int rollno,int marks)
{
	printf("name = %s\n",name);
	printf("rollno = %d\n",rollno);
	printf("marks = %d\n",marks);
}*/
void display(struct student stu)
{
	printf("name = %s\n",stu.name);
	printf("rollno = %d\n",stu.rollno);
	printf("marks = %d\n",stu.marks);
}
int main()
{
	struct student stu1 = {"john",12,87};
	struct student stu2 = {"mary",18,87};
	/* passing structure member as arguments */
	//display(stu1.name,stu1.rollno,stu1.marks);
	//display(stu2.name,stu2.rollno,stu2.marks);
	/* pass whole structure */
	display(stu1);
	display(stu2);	
	return 0;
}
#endif
#if 0
struct stag
{
	char c;
	int i;
	float f;
};
union utag
{
	char c;
	int i;
	float f;
};
int main()
{
	struct stag svar;
	union utag uvar;
	printf("size of svar is %d\n",sizeof(svar));
	printf("size of uvar is %d\n",sizeof(uvar));
	return 0;
}
#endif
#if 0
int main()
{
	int a= (8,10);
	int b,c,sum = 0;
	sum = (a=8,b=9,c=7,a+b+c);
	printf("sum = %d\n",sum);
	return 0;
}
#endif
#if 0
int main()
{
	int a = 8,b = 7,temp = 0;
	printf("a = %d,b = %d\n",a,b);
	temp = a, a = b , b = temp;
	printf("a = %d,b = %d\n",a,b);
}
#endif
#if 0
int main()
{
	int i,a = 10,b = 12;
	int flag = 0;
	
	for(i=31;i>=0;i--)
	{
		if((a & (1<<i)) == 0)
			printf("0 ");
		else
			printf("1 ");
	}
	/* after toggeling the bits */
	printf("\n");
	for(i=31;i>=0;i--)
	{
		if((a ^ (flag<<i)) == 0)
			printf("0 ");
		else
			printf("1 ");
	}
	return 0;
}
#endif
#if 0
int main()
{
	float a = -1;
	if(a)
	{
		printf("a = %f\n",a);	
	} 
	else
	{
		printf("invalid if conditions\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	int a = 10;
	if((a > 5) && (a < 15))
		printf("condition is true\n");
	else
		printf("condition is false\n");
		
	return 0;
}
#endif
#if 0
int main()
{
	float f = 10.5;
	
	while(f)
	{
		f -= 0.5;
		printf("f = %f\n",f);
	}
	return 0;
}
#endif
#if 0
int main()
{
	while(0.5)
	{
		printf("hello there\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	printf("%s","hello kem cho"+5);
	return 0;
}
#endif
#if 0
int main()
{
	int *ptr = (int *)malloc(5 * sizeof(int *));
	ptr++;
	free(ptr); 
	return 0;
}
#endif
#if 0
int main()
{
	if(!printf("hello\n"))
	{
		printf("hello1\n");
	}
	else
	{
		printf("world\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	float a = 13.5;
	double b = 13.5;
	printf("a = %f, b= %lf\n",a,b);
	return 0;
}
#endif
#if 0
int i = 10;
void val();

int main()
{
	printf("in main i = %d\n",i);
	i++;
	val();
	printf("in main i = %d\n",i);
	val();
	return 0;
}
void val()
{
	i = 100;
	printf("in val i = %d\n",i);
	i++;
}
#endif
#if 0
int main()
{
	static int count = 5;
	printf("count = %d\n",count--);
	if(count != 0)
		main();	
	return 0;
}
#endif
#if 0
int f(int);
int g(int);

int main()
{
	int x,y,s=2;
	s *= 3;
	y = f(s);
	x = g(s);
	printf("%d %d %d\n",s,y,x);		
	return 0;
}
int t = 8;

int f(int a)
{
	a += -5;
	t -= 4;
	return (a+t);	
}
int g(int a)
{
	a = 1;
	t += a;
	return (a+t);
}
#endif
#if 0
void func()
{
	int i = 0;
	register int j = 0;
	static int k = 0;
	i++;j++;k++;
	printf("%d %d %d\n",i,j,k);
}
int main()
{
	func();
	func();
	return 0;
}
#endif
#if 0
#define PRODUCT(x) ((x * x))
int main()
{
	int i=3,j,k,l;
	j = PRODUCT(3+1);
	k = PRODUCT(i++);
	j = PRODUCT(++i);
	
	printf("%d %d %d %d \n",i,j,k,l);
	return 0;
}
#endif
#if 0
int main()
{
	//printf("C is beautiful language","than c++");
	printf("hello world"+7);
	return 0;
}
#endif
#if 0
int main()
{
	int sub[50],i;
	
	for(i=1;i<=50;i++)
	{
		sub[i] = i ;
		printf("%d \n",sub[i]);
	}
	return 0;
}
#endif
#if 0
int main()
{
	float a[] = {13.24,1.5,1.5,5.4,3.5};
	float *j;
	j = a;
	j = j+ 4;
	printf("%u %f %f\n",j,*j,a[4]);
	return 0;
}
#endif
#if 0
int main()
{
	int i,arr[10];
	for(i = 1;i<15;i++)
	{
		scanf("%d",arr[i]);
	}
	for(i = 1;i<15;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
#endif
#if 0
int main()
{
	int n[3][3] = {2,4,3,6,8,5,3,5,1};
	printf("%d %d %d\n",*n,n[3][3],n[2][2]);
	return 0;
}
#endif
#if 0
int main()
{
	int i,j,max = 0,arr[5][5] = {
						{1,2,3,4,5},
						{10,11,13,78,99},
						{45,77,82,33,37},
						{21,27,44,26,23},
						{34,33,67,65,97} 
					};
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
			}
			else
			{
				continue;
			}
		}
	}
	printf("max = %d\n",max);
	return 0;
}
#endif
#if 0
int main()
{
	int number = 0;
	scanf("%d",&number);
	
	if((number & (number-1)) == 0)
		printf("number %d is power of two\n",number);
	else
		printf("number %d is not power of two\n",number);
	
	return 0;
}
#endif
#if 0
void rec_fibo(int terms)
{
	static int first = 0,second = 1;
	static int next;
	if(terms > 0)
	{
		next = first + second;
		first = second;
		second = next;
		printf("%d ",next);
		rec_fibo(terms- 1);
	}
}
int main()
{
	int terms;
	printf("enter number of terms: ");
	scanf("%d",&terms);
	printf("first %d fibonacci terms are: ",terms);
	rec_fibo(terms);
	return 0;
}
#endif
#if 0
int main()
{
	char suite = 3;
	switch(suite)
	{
		case 1 : printf("hello\n");
		case 2 : printf("world\n");
		default : printf("Kem cho\n");
	}
	return 0;
}
#endif
#if 0
int main()
{
	int result,x = 50,y=75,z=100;
	result = (x + 50 ? y>=75 ? z > 100 ? 1:2:3:4);
	printf("result = %d\n",result);
	return 0;
}
#endif
#if 0
int main()
{
	char not;
	not = !2;
	printf("%d\n",not);
	return 0;
}
#endif
#if 0
int main()
{
	int x = 7;
	int y = 0;
	if(x = 6) y = 7;
	else y = 1;
	
	printf("y = %d\n",y);
	return 0;
}
#endif
#if 0
int main()
{
	int x = 3;
	float y = 3.0;
	
	if(x == y)
		printf("Equal\n");
	else
		printf("not Equal\n");
	return 0;
}
#endif
#if 0
int main()
{
	int x,y,z;
	if(x,y,z)
		printf("hello\n");
	else
		printf("world\n");
	return 0;
}
#endif
#if 0
int main()
{
	int a = 1;
	switch(a)
	{
		int b = 23;
		case 1:
				printf("b = %d\n",b);
				//break;
		default:
				printf("b* = %d\n",b);
				break;
	}
	return 0;
}
#endif
#if 0
int main()
{
	char c[2] = "A";
	printf("%c\n",c[0]);
	printf("%s\n",c);
	return 0;
}
#endif
#if 0
int main()
{
	char s[] = "Get organized and Learn C";
	printf("%c\n",s[2]);
	printf("%s\n",s);
	printf("%s\n",&s);
	printf("%s\n",&s[2]);
	return 0;
}
#endif
#if 0
int main()
{
	char s[] = "No two viruses Work similarly";
	int i = 0;
	
	while(s[i] != 0)
	{
		printf("%c %c\n",s[i],*(s + i));
		printf("%c %c\n",i[s],*(i + s));
		i++;
	}
	return 0;
}
#endif
#if 0
int main()
{
	char s[] = "Hello world Kaushik";
	char t[25];
	char *ss = s, *tt;
	
	while(*ss != '\0')
	{
		*tt++ = *ss++;// it will give errors here
	}
	
	printf("%s\n",t);
	return 0;
}
#endif
#if 0
int main()
{
	int number,rem = 0,dec = 0,j = 1,d = 0;
	printf("please enter number: ");
	scanf("%d",&number);
	
	while(number > 0)
	{
		rem = number % 10;
		d = rem * j;
		dec += d;
		j = j *2;
		number /= 10;		
	}
	printf("decimal = %d\n",dec);
	
	return 0;
}
#endif
#if 0
void print_fibo(int limit)
{
	int i = 1,first = 0,second = 1,next = 0;
	printf("fibonacci series are : %d %d ",first,second);
	
	while(next < limit)
	{
			next = first + second;
			first = second;
			second = next;
			
			if(next < limit)
				printf("%d ",next);
			else
				break;	
	}
}
int main()
{
	int limit = 0;
	printf("please enter upperlimit for fibonacci: ");
	scanf("%d",&limit);
	
	print_fibo(limit);
	return 0;
}
#endif
#if 0
void print_armstrong(int lower,int upper)
{
	int number,sum,n,d,rem;
	
	for(number = lower; number <= upper; number++)
	{
			sum = 0;
			n = number;
			while(n > 0)
			{
				rem = n % 10;
				n /= 10;
				d = (rem * rem *rem);
				sum += d;
			}
			if(sum == number)
				printf("%d ",number);
	}	
}

int main()
{
	int lower,upper;
	printf("please enter limit for checking armstrong number: ");
	scanf("%d %d",&lower,&upper);
	print_armstrong(lower,upper);
	return 0;
}
#endif
#if 0
int multiply(int number)
{
	return (number<<1) + (number<< 3);
}
int main()
{
	int number,result;
	printf("please enter the number: ");
	scanf("%d",&number);
	
	result = multiply(number);
	printf("result = %d\n",result);
}
#endif
#if 0
int main()
{
	if(printf("hello ") < 0)
		;
	else
		printf("World");
		
	return 0;
}
#endif
#if 0
int main()
{
#if 1
	long int number;
	char arr[2][5] = {"Even","Odd"};
	scanf("%ld",&number);
	
	printf("%s",arr[number % 2]);
#endif
/*
	int number;
	scanf("%d",&number);
	
	(number & 1 && printf("Odd")) || printf("Even");
*/
	return 0;	
}
#endif
#if 0
int main()
{
	int a = 0,b = 0;
	
	if(!a)
	{
		b = !a;
		if(b)
		{
			a = !b;
		}
	}
	printf("a = %d,b = %d\n",a,b);
	return 0;
}
#endif
#if 0
int main()
{
	int k = 10;
	switch(k)
	{
		case '5':
		case '10':
			k++;
			//continue; can't use continue int the switch statements
		case '15':
		case '20':
			k--;
	}
	printf("k = %d\n",k);
	return 0;
}
#endif
#if 0
int main()
{
	int var = 2,x = 1,y = 2;
	
	switch(var)
	{
		case x: //cause error here
			x++;
			break;
		case y: //cause error here
			y++;
			break;
	}
	printf("x = %d,y = %d\n",x,y);
	return 0;
}
#endif
#if 0
int main()
{
	int i,total = 0;
	for(i = 1;i<=10;i++)
	{
		switch(i)
		{
			case 1:
			case 4:
			case 5:
			case 7:
				total += i;
				break;
			default:
				continue;
		}
		printf("i = %d\n",i);
	}
	printf("total  = %d\n",total);
	return 0;
}
#endif
#if 0
int main()
{
	int x = 2,y = 20;
	switch(x)
	{
		y = 30; //can't declare variable inside switch here
		case 1:
			y++;
			break;
		case 2:
			y--;
			break;
		default:
			y += 2;
	}
	printf("y = %d\n",y);
	return 0;
}
#endif
#if 0
int main()
{
	int i,j;
	/*for(i = 10;i > 0;i--);
		printf("i = %d\n",i);
	*/
	/*for(j = 10;i = j;j -= 2)
		printf("i = %d\n",i);
	*/
	for(i = 10;i--;)
		printf("i = %d\n",i);
	return 0;
}
#endif
#if 0
int main()
{
	int i = 10;
	do
	{
		printf("i = %d\n",i);
		i -= 3;
	}while(i);
	return 0;
}
#endif
#if 0
int main()
{
	int x = 0,i,j;
	for(i = 0;i<5;i++)
		for(j = i; j>0; j--)
			x = i + j +1;
	printf("x = %d\n",x);
	return 0;
}
#endif
#if 0
int main()
{
	int i;
	for(i = 1;i<=5;i++)
	{
		if(i == 3)
			continue;
		printf("i = %d\n",i);
	}
	return 0;
}
#endif
#if 0
int main()
{
	int i = 0;
	do
	{								//without braces it will causes error
		i++;
		printf("i = %d\n",i);
	}while(i <= 5);
		
	return 0;
}
#endif
#if 0
int main()
{
	int s,a= 10,b= 20;
	
	s = sum(a,b);
	printf("s = %d\n",s);
	return 0;
}
int sum(int a,int b)
{
	return a + b;
}
#endif
#if 0
int main()
{
	int a = 10,b = 5;
	printf("min is = %d\n",min(a,b));
	return 0;
}
int min(int a,int b)
{
	a < b ? return a : return b;//error here
}
#endif
#if 0
void func(int ,int);
int main()
{
	int x;
	x = func(5,6) + 100;// gives error here
	printf("x = %d\n",x);
	return 0;
}
void func(int a,int b)
{
	int z;
	z = a+b;
}
#endif
#if 0
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a - b;
}
int main()
{
	int a = 10,b=20,c = 30,d = 40;
	printf("%d \n",a + sum(c,d));
	printf("%d \n",a + sub(c,d));
	return 0;
}
#endif
#if 0
int square(char a)
{
	return a*a;
}
int main()
{
	char x = 'A'; int y;
	y = square(x);
	printf("y = %d\n",y);
	return 0;
}
#endif
#if 0
int main()
{
	int i = 0,j = 0,arr[6] = {4,2,6,0,5,10};
	
	while(arr[i])
	{
		j += arr[i];
		i++;
	}
	printf("j = %d\n",j);
	return 0;
}
#endif
