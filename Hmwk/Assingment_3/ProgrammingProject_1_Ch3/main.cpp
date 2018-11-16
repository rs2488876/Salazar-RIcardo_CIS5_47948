/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 1, 2018, 4:19 PM
 */

#include <iostream>
using namespace std;

int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    int length=1, hour, minute, strtTime, other_call;/* length of call, time of day in hours and minutes
                                          the star time of the call in whole number*/ 
    char day_first, day_second, time_colon;/*first and second character for the day of the week,
                                            *  and the colon that goes between hour and minute */ 
    double cost, rate;//cost of the call
    const double dayRate = 0.40, eveRate = 0.25, wkEndRate = 0.15;//the billing rates
    
    do
    {
        cout << "Enter the day of the week(Mo Tu We Th Fr Sa Su): " <<endl;
        cin >> day_first >> day_second;
        
        cout << "Enter the time the call was started in a "
                "24-hour format (i.e. 19:45): " <<endl;
        cin >> hour >> time_colon >> minute;
        strtTime= (hour*100)+minute;
        
        cout << "Enter the length of the call in minutes: " << endl;
        cin >> length;
        
        if ((day_first == ('S'||'s'))&&(day_second == ('A'||'a')))//Saturday test
            rate = wkEndRate;
        else if ((day_first == ('S'||'s'))&&(day_second == ('U'||'u')))//Sunday test
            rate = wkEndRate;
        else
        {
            if (strtTime >= 800 && strtTime <= 1800)
                rate = dayRate;
            else
                rate = eveRate;
        }
        cost = rate*length;
        
        cout << "On " << day_first<< day_second << " at " << hour << time_colon << minute 
        << " at a rate of $" << rate << " per minute,"<<endl;
        cout << "the cost of the call will be $" << cost <<endl;
        cout << "Another call? '1' for Yes, '0' for No"<<endl;
        cin >> other_call;
                
    }
    while (other_call==1);
    return 0;
}

