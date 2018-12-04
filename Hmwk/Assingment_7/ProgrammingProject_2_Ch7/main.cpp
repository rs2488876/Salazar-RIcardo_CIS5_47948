/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on December 1, 2018, 11:44 AM
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int Months=12;

void filArr (double avg[], string month[]);
void table (string month[], double avg[], double act[]);

int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    string m[Months]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug",
                      "Sep", "Oct", "Nov", "Dec"};
    double avgRain[Months];
    double actRain[Months]={4.47,2.11,.15,.04,.05,0,.03,.39,.05,0,.03,0};
    char ans; 
    
    cout << "This program calculates the monthly rainfall for this year compared"
            " to that of 2017."<<endl;
    do
    {
    filArr (avgRain, m);
    table (m, avgRain, actRain);
    
    cout << "Again? 'Y' for yes, 'N' for no:" <<endl;
    cin >> and;
    }
    while (ans == 'y'|| ans =='Y');
    
    return 0;
}

void filArr (double avg[], string month[])
{
 cout << "Enter the average rainfall for each month:"<<endl;
 for (int index = 0; index < 12; index++)
        {
		cout << month[index] << ": " << setw(5);
		cin >> avg[index];
	}
}

void table (string month[], double avg[], double act[])
{
    cout<< left << setw(7) << "Month" << setw(5) << "2017" << setw(35) 
            << "2018 Difference" <<endl;
    for (int index = 0; index < 12; index++)
    {
         cout<< setw(7) << month[index] << setw(5) << act[index] << setw(35) 
            << act[index]-avg[index] <<endl;
    }
    
}