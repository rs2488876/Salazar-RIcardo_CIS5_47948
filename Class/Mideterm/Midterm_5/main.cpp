/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 28, 2018, 12:44 PM
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare all Variables Here
    double hours, rate, ot, ot2, gpay;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>rate>>hours;
    
    //Calculate Paycheck
    if (hours<=20)
    {
        gpay=hours*rate;
    }
    else if (hours>20&&hours<=40)
    {
        ot=hours-20;
        gpay=(rate*20)+((ot*rate)*1.5);
    }
    else
    {
        ot2=hours-40;
        gpay=(rate*20)+((20*rate)*1.5)+((ot2*rate)*2);
    }
    
    //Output the check
    cout << "$"<<gpay<<endl;
    
    //Exit
    return 0;
}