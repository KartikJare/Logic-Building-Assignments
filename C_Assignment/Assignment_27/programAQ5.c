///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question5.c
//  Descreption :which get 2 strings from user and concat second string after first string. 
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*

Input : "Marvellous Infosystems"
        "Logic Building"

Output : "Marvellous Infosystems Logic Building"

*/

#include<stdio.h>

void StrCatX(char *src,char *dest)
{
    if(NULL == src || NULL == dest)
    {
        printf("Unable to find the string");
        return;
    }

    while(*src != '\0')
    {
        src++;
    }
    
    while((*dest != '\0'))
    {
        *src = *dest;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[80] = {'\0'};
    char brr[50] = {'\0'};

    printf("Please enter the frist string : \n");
    scanf("%[^\n]s",arr);

    getchar();

    printf("Please enter the second string : \n");
    scanf("%[^\n]s",brr);

    StrCatX(arr,brr);

    printf("combine string is : %s",arr);

    return 0;
}