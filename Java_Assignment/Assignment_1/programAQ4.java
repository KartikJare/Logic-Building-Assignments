///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question4.java
//  Descreption : Used to accpect one number & chech whether is divisible by 5 or not
//  Author : Kartik Ganesh Jare
//  Date : 31/05/25
//  
///////////////////////////////////////////////////////////
import java.io.*;

class Check
{
    public Boolean CheckDivisible(int iNo)
    {
        if((iNo % 5) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class programAQ4
{
    public static void main(String A[]) throws Exception
    {
        int iValue = 0;
        Boolean bRet = false;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in)); 

        System.out.println("Enter number: ");
        iValue = Integer.parseInt(bobj.readLine());

        Check cobj = new Check();
        bRet = cobj.CheckDivisible(iValue);

        if(bRet == true)
        {
            System.out.println("Divisble by 5");
        }
        else
        {
            System.out.println("Not Divisble by 5");
        }
    }
}