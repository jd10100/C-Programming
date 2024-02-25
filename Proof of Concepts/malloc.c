#include<stdio.h>
#include<stdlib.h>


int main()
{
    int size = 0;
    int *ptr = NULL;


    printf("Enter num of element\n");

    scanf("%d",&size);


    //ptr = (int *)malloc(size*sizeof(int)); //Step 1 Allocate the memory.
      ptr = (int *)calloc(5,8);
    if(ptr == NULL){

        printf("Unable to allocate memort\n");
    }
    else{

        printf("Memory sucessfully allocted\n");
    }
        
    // Step 2 Use the memory

    free(ptr); //step 3 free the memory 

    return 0;


}