/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on November 11, 2018, 9:26 AM
 */

#include <iostream>
using namespace std;

//two call by reference functions, and a call by value function.
void in(int& h, int& m);
void convert(int& h, int& m, char& ap);
void out(int h, int m, char ap);

int main( )
{
    int hour, minute;
    char ampm, ans;//'ampm' to see if time is AM or PM, 'ans' used for loop
    cout << "This program converts 24-hour format time into 12-hour format."<<endl;
    
    //loop start
    do
    {
       //functions
        in(hour, minute);
        convert(hour, minute, ampm);
        out(hour, minute, ampm);
        
         //loop
        cout << "Again?" <<endl
                << "Type 'y' for yes, or 'n' for no (press return):"<<endl;
        cin >> ans;
    }
    while (ans=='y'||ans=='Y');

    return 0;
}

void in(int& h, int& m)
{
    do
    {
        cout << "Enter Hours (0-23):"<<endl;
        cin >> h;
        cout << "Enter Minutes (0-59):"<<endl;
        cin >> m;
        if ((h<0&&h>23)||(m<0&&m>59)) cout << "Invalid values, PLease enter again."<<endl;
    }
    while ((h<0&&h>23)||(m<0&&m>59));
}

void convert(int& h, int& m, char& ap)
{
    if (h>12)
    {
        h=h-12;
        ap = 'p';
    }
    else if (h==12) ap='p';
    else ap='a';
}

void out(int h, int m, char ap)
{
    if(m<10) cout << h << ":0" << m;
    else cout << h << ":" << m;
    
    if(ap=='p') cout << " P.M."<<endl;
    else cout << " A.M."<<endl;
}