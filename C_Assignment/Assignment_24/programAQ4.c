///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question4.c
//  Descreption : Accept string from user and check whether it contains vowels in it or not.
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

typedef bool BOOL;

BOOL ChkVowel(char*str)
{
    BOOL bFlag = false;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str == 'A')|| (*str == 'E') ||( *str == 'I') || (*str == 'O') || (*str == 'U') || 
        (*str == 'a')|| (*str == 'e') ||( *str == 'i') || (*str == 'o') || (*str == 'u') )
        {
            bFlag = true;
            break;
        }
        str++;
    }
    
    return bFlag;
}


int main()
{
    char arr[20] = {'\0'};
    BOOL bRet = false;

    printf("Enter strin : ");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);
    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}
