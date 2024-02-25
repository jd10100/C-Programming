#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>



int main()
{
    char fname[30];
    int fd = 0;

    printf("Enter the file name that you want to open\n");
    scanf("%s",fname);

    fd = creat(fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {   
        printf("%d\n",fd);
        printf("File is sucessfully opened");
    }

    return 0;
}

// 0777         0 - octal

//user 
//Owener        //4 + 2 + 1  // all permission
//Group
//Other


//Operation 
//Read          4
//Write         2
//Execute       1