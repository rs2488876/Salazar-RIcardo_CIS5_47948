
/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 28, 2018, 1:08 PM
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv)
{
    //Declare all Variables Here
    double x,fx,nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    for(int term=1;term<=nterms;term++)
    {
        int fact=1;
        for(int i=1;i<=term;i++)
        {
            fact*=i;
        }
        if (term%2==1)
        {
        fx+=(pow(x,term)/fact);
        }
        else;
    }
    //Output the result here
    cout <<fx<<endl;
    
    //Exit
    return 0;
}