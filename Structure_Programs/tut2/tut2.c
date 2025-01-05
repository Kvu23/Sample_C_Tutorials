/* struct employee record program*/
#include<stdio.h>
struct employee
{
	char name[20],address[50];
	int emp_no,age;
}emp[20];
int main()
{
	int i=0,n;
	printf("how many no of employee data to enter:   ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter employee name:   ");
		scanf("%s",emp[i].name);
		printf("\nenter employee address:   ");
		scanf("%s",emp[i].address);
		printf("\nenter employee number:   ");
		scanf("%d",&emp[i].emp_no);
		printf("\nenter employee age:   ");
		scanf("%d",&emp[i].age);
	}
	printf("\nemp_no\tname\tage\taddress \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%s\n",emp[i].emp_no,emp[i].name,emp[i].age,emp[i].address);
	}
	return 0;
}
