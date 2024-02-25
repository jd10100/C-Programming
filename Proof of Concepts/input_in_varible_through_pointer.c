//Taking input inside a verible through a pointer

#include<stdio.h>

int main()
{
    auto int iVer = 0;
    auto int* ptr = NULL;


    ptr = &iVer;

    printf("The original value in iVer is %d\n",iVer);
    printf("Enter the value in iVer\n");

    scanf("%d",ptr);

    printf("Changed value in iVer is %d\n",iVer);


    return 0;
}