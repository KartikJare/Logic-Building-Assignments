///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question3.java
//  Descreption : Used to print 5 to 1 numbers on screen
//  Author : Kartik Ganesh Jare
//  Date : 31/05/25
//  
///////////////////////////////////////////////////////////

class Display
{
    public void Display()
    {
        int iCnt = 0;

        iCnt = 5;
        while(iCnt >= 1)
        {
            System.out.println(iCnt);
            iCnt--;
        }    
    }
}

class programAQ3
{
    public static void main(String A[])
    {
        Display dobj = new Display();
        dobj.Display();
    }
}