///////////////////////////////////////////////////////////
//
//  File name : Assignement38Question1.cpp
//  Description : Write generic program to multiply two numbers
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//
///////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    printf("%d", iRet);

    float fRet = Multiply(10.0f, 20.0f);
    printf("%f", fRet);

    return 0;
}
