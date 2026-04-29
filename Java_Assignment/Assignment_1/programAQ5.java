///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question5.java
//  Descreption : Used to accept one number from user & print that number of * in screen
//  Author : Kartik Ganesh Jare
//  Date : 31/05/25
//  
///////////////////////////////////////////////////////////

class Accept
{
    public void AcceptInput(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("*");
        }    
    }
}

class programAQ5
{
    public static void main(String A[])
    {
        int iValue = 0;

        iValue = 5;

        Accept aobj = new Accept();
        aobj.AcceptInput(iValue);
    }
}