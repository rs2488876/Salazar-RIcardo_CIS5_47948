/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 17, 2018, 8:33 PM
 */

#include <iostream>
using namespace std;

//Declare functions if any
double total_check(double total);

int main( )
{	
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    int option = 0;
    int dollars = 0;
    double const dollar = 1.00;
    int quarters = 0;
    double const quarter = 0.25;
    int dimes = 0;
    double const dime = 0.10;
    int nickels = 0;
    double const nickel = 0.05;
    double const twinkie = 3.50;
    double total = 0.00;
    double change = 0.00;
    char ans;

//Display welcome message. Ask user for $3.50 in coins (Dollars, quarters, dimes, nickels.)
    cout << endl << "Welcome to the deep fried twinkie machine."<<endl
    << "Please enter $3.50. I accept Dollars, Quarters, Dimes and nickels."<<endl;

    do 
    {
        //Create menu
        cout << "1) Dollars"<<endl;
        cout << "2) Quarters"<<endl;
        cout << "3) Dimes"<<endl;
        cout << "4) Nickels"<<endl;
        cout << "<< Please select an option: "<<endl;
        cin >> option;

        if(option==1) //Option for dollars
            {
                ++ dollars;
                total = (total + dollar);
            }
        else if(option==2) //Option for Quarters
        {
            ++ quarters;
            total = (total + quarter);
        }
        else if(option==3) //Option for Dimes
        {
            ++ dimes;
            total = (total + dime);
        }
        else if(option==4) //Option for nickels
        {
            ++ nickels;
            total = (total + nickel);
        }
        else 
        { 
            cout << "You have entered an improper option. Please try again."<<endl;
            }

            cout << "You have entered the following coins: " <<endl 
                    << "Dollar Coins: " << dollars <<endl;
            cout << "Quarters: " << quarters <<endl << "Dimes: " 
                    << dimes <<endl << "Nickels: " << nickels <<endl;
            cout << "Your total is: $" << total <<endl;

            //Check change
            change = total_check(total);
            
            //loop
            cout << "New proposal?" <<endl
                    << "Type 'y' for yes, or 'n' for no (press return):"<<endl;
            cin >> ans;
                
    }
    while (ans == 'y' || ans == 'Y');
    return 0;
}

double total_check(double total)
{ 
		double change = 0.00;
		double const twinkie = 3.50;
		int option;
		if(total >= twinkie) //Check to see if user has entered $3.50
        {   change = (total - twinkie);
        //Give the user change if he has given more then 3.50.
        cout << "Your change is: $" << change <<endl 
                << "Thank you and enjoy your deep fried twinkie." <<endl;
        } 
		return(change);
}