////////////////////////////////////////////////////////
// Name : Omkar Rajendra Nanaware.
// Language: c 
// Assignment No: 3
// Problem Statement : Accepte one character from user and check whether the
//  the character is vowel (a,e,i,o,u) or not
// Date and Time : 26 April 13:12
// Platform : Linux
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char Cvalue)
{
    if(Cvalue == 'a' || Cvalue == 'A' || Cvalue == 'e'|| Cvalue =='E'|| Cvalue == 'i' || Cvalue =='I' || Cvalue == 'o' || Cvalue == 'O' || Cvalue == 'u' || Cvalue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}



int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("Its Vowel");
    }
    else
    {
        printf("Its not Vowel");
    }
    return 0;
}