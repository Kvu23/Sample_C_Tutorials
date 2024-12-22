/* pass an array to functions */

#include <stdio.h>
#if 0
#define MAX_LEN 5
int maximum(int arr[]);
int main()
{
	int i,arr[MAX_LEN],max_num;
	printf("please enter the array elements: ");
	for(i=0;i<MAX_LEN;i++)
	{
		scanf("%d",&arr[i]);//if you scan elements in loop use & and arr[i]
	}
	max_num = maximum(arr);
	printf("\n maximum elements in an array is %d\n",max_num);
	return 0;
}

int maximum(int arr[MAX_LEN])
{
	int i,max_val = arr[0];
	//printf("%d\n",max_val);
	for(i=0;i<MAX_LEN;i++)
	{
		if(arr[i]>max_val)
		{
			max_val = arr[i+1];	
		}	
	}
	//printf("%d\n",max_val);
	return max_val;
}
#endif

#if 0
void display(int *arr)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",*(arr+i));//1st standard methods 
	}
}

int main()
{
	int i,arr[5] = {10,11,12,13,14};
	//display(&arr);//1st valid but gives warning
	display(arr);//2nd standard methods to pass array to the functions
	display(int arr[5]);
	//display(&arr);//3rd gives warning
	return 0;
}
#endif

#if 0
int main()
{
	int i=3, *x;
	float f = 10.5, *y;
	char c = 'k' , *ch;
	x = &i;
	y = &f;
	ch = &c;
	printf("value of i is %d \n",i);
	printf("value of f is %f \n",f);
	printf("value of c is %c \n",c);
	
	printf("value i is %d at address %u\n",i,x);
	printf("value f is %f at address %u\n",f,y);
	printf("value c is %c at address %u\n",c,ch);
	
	
	x++;
	y++;
	ch++;
	
	printf("value i is %d at address %u\n",i,x);
	printf("value f is %f at address %u\n",f,y);
	printf("value c is %c at address %u\n",c,ch);
	
	return 0;
}
#endif

#if 1
void display(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        /* four different methods to access array elements */
        printf("address = %p ", &arr[i]);
        printf("elements = %d %d ", arr[i], *(arr + i));
        printf("%d %d\n", *(i + arr), i[arr]);
    }
}

int main()
{
    int arr[] = {10, 11, 12, 13, 14};
    // display(&arr,5);//1st valid but gives warning
    display(arr, 5); // 2nd standard methods to pass array to the functions
    return 0;
}
#endif
