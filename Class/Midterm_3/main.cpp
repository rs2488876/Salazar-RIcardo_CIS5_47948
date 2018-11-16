/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 27, 2018, 4:29 PM
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare all Variables Here
    int number, th, h, t, o;//thousands, hundreds, tens, ones

    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    if (number >=1 && number <=3000)
    {
    //Calculate the 1000's, 100's, 10's and 1's
    th=number/1000;
    number-=th*1000;
    h=number/100;
    number-=h*100;
    t=number/10;
    number-=t*10;
    o=number;
    
    //Output the check value
    //Output the thousands
    switch (th)
    {
        case 3: cout << "Three Thousand ";break;
        case 2: cout << "Two Thousand ";break;
        case 1: cout << "One Thousand ";break;
        case 0: cout << "";break;
    }
    
    //Output the hundreds
    switch(h)
    {
        case 9: cout << "Nine Hundred ";break;
        case 8: cout << "Eight Hundred ";break;
        case 7: cout << "Seven Hundred ";break;
        case 6: cout << "Six Hundred ";break;
        case 5: cout << "Five Hundred ";break;
        case 4: cout << "Four Hundred ";break;
        case 3: cout << "Three Hundred ";break;
        case 2: cout << "Two Hundred ";break;
        case 1: cout << "One Hundred "; break;
        case 0: cout << "";break;
    }
    
    //Output the Tens and Ones
    if (t==1)
    {
        switch (o)
        {
            case 2: cout << "Twelve";break;
            case 1: cout << "Eleven";break;
            case 0: cout << "Ten";break;
        }
    }
    else
    {
        switch (t)
        {
            case 9: cout << "Ninety ";break;
            case 8: cout << "Eighty ";break;
            case 7: cout << "Seventy ";break;
            case 6: cout << "Sixty ";break;
            case 5: cout << "Fifty ";break;
            case 4: cout << "Forty ";break;
            case 3: cout << "Thirty ";break;
            case 2: cout << "Twenty ";break;
            case 0: cout << "";break;
        }
        
        switch (o)
        {
            case 9: cout << "Nine ";break;
            case 8: cout << "Eight ";break;
            case 7: cout << "Seven ";break;
            case 6: cout << "Six ";break;
            case 5: cout << "Five ";break;
            case 4: cout << "Four ";break;
            case 3: cout << "Three ";break;
            case 2: cout << "Two ";break;
            case 1: cout << "One ";break;
            case 0: cout << "";break; 
        }      
    }
    cout << "and no/100's Dollars"<<endl;
    }
    else
    {
        cout << "Number Invalid"<<endl;
    }
    //Exit
    return 0;
}