/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on November 11, 2018, 1:57 PM
 */

#include <iostream>
using namespace std;

void start(int& h1, int& m1, char& ampm);
void wait (int& h2, int& m2);
void add (int h1, int m1, int h2, int m2);

int main( )
{
    int h1, m1, h2, m2;/*h is for hours m is for minutes
                                1 is the initial time, 2 is the wait*/
    char ampm, ans;
    
    cout << "This program calculates the time it will be after waiting a set amount."<<endl;
    
    do
    {
      //functions
      start(h1,m1,ampm);
      wait(h2,m2);
      add(h1, m1, h2, m2);
      
      //loop
      cout <<"Again?"<<endl<<"Type 'y' for yes, or 'n' for no (press return):"<<endl;
      cin >> ans;
    }
    while (ans=='y'||ans=='Y');
    
    return 0;
}

void start(int& h1, int& m1, char& ampm)
{
    do
    {
        cout << "Enter the current time."<<endl;
        cout << "Enter Hours (1-12):"<<endl;
        cin >> h1;
        cout << "Enter Minutes (0-59):"<<endl;
        cin >> m1;
        cout << "Enter 'A' for A.M. or 'P' for P.M."<<endl;
        cin >> ampm;
        if ((h1<0&&h1>12)||(m1<0&&m1>59)||(ampm!='a')||(ampm!='A')||(ampm!='p')||(ampm!='P')) 
            cout << "Invalid values, PLease enter again."<<endl;
    }
    while ((h1<0&&h1>12)||(m1<0&&m1>59)||(ampm!='a')||(ampm!='A')||(ampm!='p')||(ampm!='P'));
}

void wait(int& h2, int& m2)
{
    do
    {
        cout << "Enter how long you have to wait."<<endl;
        cout << "Enter Hours (0-23):"<<endl;
        cin >> h2;
        cout << "Enter Minutes (0-59):"<<endl;
        cin >> m2;
        if ((h2<0&&h2>23)||(m2<0&&m2>59)) cout << "Invalid values, PLease enter again."<<endl;
    }
    while ((h2<0&&h2>23)||(m2<0&&m2>59));
}

void add(int h1, int m1, int h2, int m2)
{
    int hour, min;
    min=m1+m2;
    hour=h1+h2+(min/60);
    min%=60;
    hour%=24;
    
    cout <<"The time after waiting will be "<<hour<<":"<<min<<endl;
}