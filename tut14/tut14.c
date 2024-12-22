/* 2d arrays Exercises */

#include <stdio.h>
#include <stdlib.h>
#if 1

void display(int *arr)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", (*(arr + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    display((int *)arr);
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //printf("%d ",arr[i][j]);//1st method
            //printf("%d ",*(arr[i]+j));//second methods
            printf("%d ",*(*(arr+i)+j));//third methods
        }
        printf("\n");
    }*/
    return 0;
}
#endif
/* pointer to array notation */
#if 0
int main()
{
	int i,j,*pint,arr[3][3] = {
							{1,2,3},
							{4,5,6},
							{7,8,9},
							};
	int (*p)[3];
	for(i=0;i<3;i++)
	{
		p = &arr[i];
		pint = (int *)p;
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d ",*(pint + j));
		}
	}
	return 0;
}
#endif
/* 3 ways to pass an array to an functions */
#if 0
/*
void display(int *arr,int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",*(arr + i*c + j));
		}
		printf("\n");
	}
}

void show(int (*arr)[3],int r,int c)
{
	int i,j,*p;
	for(i=0;i<r;i++)
	{
		p = (arr + i);
		for(j=0;j<c;j++)
		{
			printf("%d ",*(p + j));
		}
		printf("\n");
	}
}
*/
void print(int arr[][3],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][3] = 	{
							{1,2,3},
							{4,5,6},
							{7,8,9},
						};
	
	//display(arr,3,3);
	//show(arr,3,3);
	print(arr,3,3);
	return 0;
}
#endif
/* array of pointers */
#if 0
#define SIZE 4
int main()
{
	int m,i = 31, j = 40,k = 45, l = 77;
	int *arr[SIZE];
	
	arr[0] = &i;
	arr[1] = &j;
	arr[2] = &k;
	arr[3] = &l;
	
	for(m = 0;m<SIZE;m++)
	{
		printf("%d ",*(arr[m]));
	}
	return 0;
}
#endif

#if 0
int main()
{
	static int a[] = {0,1,2,3,4};
	int *p[] = {a,a+1,a+2,a+3,a+4};
	printf("%u %u %d\n",p,(*p),*(*p));
	return 0;
}
#endif

#if 0
int main()
{
	int i,j,arr[4][4] = 	{
							{1,2,3,4},
							{4,5,6,7},
							{7,8,9,10},
							{11,12,13,14}
						};
	
	//printf("%d ",*(arr + 2*4 + 3));//access elements of 2d arrays 
	printf("sizeof(arr) is %d, and  %d ",sizeof(arr),sizeof(arr)/sizeof(arr[0][0]));
	return 0;
}
#endif
/* create one dimensional array using malloc */
#if 0

int main()
{
	int vector[] = {10,11,12,13,14};
	int i,*ptr = (int *)malloc(5 *sizeof(int));
	for(i=0;i<5;i++)
	{
		*(ptr + i) = vector[i];
		printf("*(ptr + i) = %d\n",*(ptr + i));
	}	
	return 0;
}
#endif
#if 0
int main()
{
	int *arr[5],i;
	for(i=0;i<5;i++)
	{
		//arr[i] = (int *)malloc(sizeof(int));
		//*arr[i] = i;
		*(arr + i) = (int *)malloc(sizeof(int));
		**(arr + i) = i;
		printf("arr[%d] = %d\n",i,*(arr[i]));
	}
	return 0;
}
#endif
/*memory allocation to 2d array using single pointers */
#if 0
int main()
{
    int r = 3, c = 4;
    int *arr = (int *)malloc(r * c * sizeof(int));

    int i, j, count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++count;

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", *(arr + i*c + j));
		
	free(arr);
  
   return 0;
}
#endif
/* using array of pointers */
#if 0
int main()
{
    int r = 3, c = 4, i, j, count;

    int *arr[r];
    for (i=0; i<r; i++)
         arr[i] = (int *)malloc(c * sizeof(int));

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", arr[i][j]);

    free(*arr);
   return 0;
}
#endif
/* using pointer to a pointer */
#if 0
int main()
{
    int r = 3, c = 4, i, j, count;

    int **arr = (int **)malloc(r * sizeof(int *));
    for (i=0; i<r; i++)
         arr[i] = (int *)malloc(c * sizeof(int));

    // Note that arr[i][j] is same as *(*(arr+i)+j)
    count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count

    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", arr[i][j]);
         
         
   return 0;
}
#endif
/* using double pointer and one malloc */
#if 0
int main()
{
    int r=3, c=4;
    int **arr;
    int count = 0,i,j;
 
    arr  = (int **)malloc(sizeof(int *) * r);
    arr[0] = (int *)malloc(sizeof(int) * c * r);

    for(i = 0; i < r; i++)
        arr[i] = (*arr + c * i);
 
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count
 
    for (i = 0; i <  r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
 
    return 0;
}
#endif
#if 0
void largest_num(int *arr,int number);
int main()
{
	int number,i;
	printf("please enter number of elements ");
	scanf("%d",&number);
	
	int *arr = (int *)malloc(number *sizeof(int));
	for(i= 0;i<number;i++)
	{
		scanf("%d",arr +i);
	}
	largest_num(arr,number);
	free(arr);
	return 0;
}
void largest_num(int *arr,int number)
{
	int i;
	for(i=1;i<number;i++)
	{
		if(*(arr) < *(arr+ i))
		{
			*arr = *(arr+i);
		}
		else
			continue;
	}
	printf("largest number is %d\n",*(arr));
}
#endif
