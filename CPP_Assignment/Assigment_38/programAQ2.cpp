///////////////////////////////////////////////////////////
//
//  File name : Assignement38Question2.cpp
//  Description : Write generic program to find largest number from three numbers.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//
///////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2 ,T no3)
{
    T iMax = no1;

    if(no2 > iMax)
    {
        max = no2;
    }

    if(no3 > iMax)
    {
        max = no3;
    }

    return iMax;
}

int main()
{
    int iRet = Max(10,20,30);
    cout<< iRet << endl;

    float fRet = Max(10.5f,25.5f,15.5f);
    cout<< fRet << endl;

    return 0;
}