/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 28, 2018, 10:00 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare all Variables Here
    char package, reco;
    double hours, price, save;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges plus fees
    switch (package)
    {
        case 'a':
        case 'A':
            if (hours<=10)
            {
                price=16.99;
            }
            else if (hours>10&&hours<=20)
            {
                price=16.99+((hours-10)*.95);
            }
            else
            {
               price=16.99+9.5+((hours-20)*.85);
            }
            break;
        case 'b':
        case 'B':
            if (hours<=20)
            {
                price=26.99;
            }
            else if (hours>20&&hours<=30)
            {
                price=26.99+((hours-20)*.74);
            }
            else
            {
                price= 26.99 + (10*0.74) + ((hours-30)*0.64);
            }
            break;
        case 'c':
        case 'C':
            price=36.99;break;
            
    }
    
    //savings and cheapest package
    if (hours<=10&&(package=='b'||'B'))
    {
        reco='A';
        save=price-16.99;
    }
    else if (hours<=20&&(package=='c'||'C'))
    {
        reco='A';
        save=price-26.99;
    }
    else if (price<26.99)
    {
        reco='A';
        save=price-16.99;
    }
    else if (price>=26.99&&price<36.99)
    {
        reco='B';
        save=price-26.99;
    }
    else
    {
        reco='C';
        save=price-36.99;
    }
    
    //Outputs
    cout <<"$"<<price<<" "<<reco<<" "<<"$"<<save<<endl;
        
    //Exit
    return 0;
}