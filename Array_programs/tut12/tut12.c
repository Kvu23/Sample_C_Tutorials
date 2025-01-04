/* division  of matrix using 2d array */
#include<stdio.h>

int main(void)
{
    int w,x;
    float a[3][3],b[3][3];
    double c[3][3];

    printf("please enter elements of matrix a:  \n");
    for(w=0;w<3;++w)
    {
        for(x=0;x<3;++x)
        {
            scanf("%f",&a[w][x]);
        }
        printf("\n");
    }
//w=x=y=0;
    printf("please enter elements of matrix b:  \n");
    for(w=0;w<3;++w)
    {
        for(x=0;x<3;++x)
        {
            scanf("%f",&b[w][x]);
        }
        printf("\n");
    }
//w=x=y=0;
    for(w=0;w<3;++w)
    {
        for(x=0;x<3;++x)
        {
                c[w][x] =(float) (a[w][x] / b[w][x]);
        }
    }
    //w=x=y=0;
    printf("\n resultant matrix c is :   \n");
    for(w=0;w<3;++w)
    {
        for(x=0;x<3;++x)
        {
            printf("%lf\t",c[w][x]);
        }
        printf("\n");
    }
    return 0;
}
