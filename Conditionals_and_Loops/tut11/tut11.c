// display using switch statements //

#include <stdio.h>

int main()

{
    int n;
    printf("please enter any number between 1-7:    ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("today is monday \n");
        break;
    case 2:
        printf("today is tuesday \n");
        break;
    case 3:
        printf("today is wednsday \n");
        break;
    case 4:
        printf("today is thursday \n");
        break;
    case 5:
        printf("today is friday \n");
        break;
    case 6:
        printf("today is saturday \n");
        break;
    case 7:
        printf("today is sunday \n");
        break;
    }
    return 0;
}
