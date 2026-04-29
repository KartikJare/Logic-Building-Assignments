///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question1.java
//  Descreption : Used to divide two numbers
//  Author : Kartik Ganesh Jare
//  Date : 31/05/25
//  
///////////////////////////////////////////////////////////

class Divide
{
    public int Divide(int iNo1,int iNo2)
    {
        int iAns = 0;

        if(iNo2 == 0)
        {
            return -1;
        }

        iAns = iNo1 / iNo2;

        return iAns;    
    }
}

class programAQ1
{
    public static void main(String A[])
    {
        int iValue1 = 15, iValue2 = 5;
        int iRet = 0;

        Divide dobj = new Divide();
        iRet = dobj.Divide(iValue1,iValue2);

        System.out.println("Division is : "+iRet);
    }
}