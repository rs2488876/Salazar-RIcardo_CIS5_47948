/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 15, 2018, 5:25 PM
 */

#include <iostream>
using namespace std;

double intial(double price, double dPayment);//initial loan balance
double mortgage(double IntLoan);//The interest for the annual cost 
double taxRate(double intBal);//The Tax rate
double housecost(double mortCost, double taxrate);//The annual cost

int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double price, downPay;//Price of house and their down payment
    double intBal, anulMort, taxSav, frstCost;
    char ans;
    
    do
    {
        //Inputs from the buyer
        cout << "This program computes the annual after-tax cost of a new house in the first year." <<endl;
        cout << "Please enter the price of the new home(leave out any commas):"<<endl;
        cin >> price;
        cout << "Please enter your down payment(leave out any commas):"<<endl;
        cin >> downPay;
        
        //custom outputs
        cout << "For a house worth $" << price << " and with a down payment of $"; 
        cout << downPay <<endl;
        
        intBal = intial(price, downPay);
        
        anulMort = mortgage(intBal);
        
        taxSav = taxRate(intBal);
        
        frstCost = housecost(anulMort, taxSav);
        
        cout << "The initial loan balance is $" << intBal <<endl;
        cout << "The annual mortgage cost is $" << anulMort <<endl;
        cout << "The tax saving is $" << taxSav <<endl;
        cout << "So with that said the cost of a new home for the first year of ";
        cout << "ownership is $" << frstCost <<endl;
        
        //loop
        cout << "New proposal?" <<endl
                << "Type 'y' for yes, or 'n' for no (press return):"<<endl;
        cin >> ans;
                
    }
    while (ans == 'y' || ans == 'Y');
    return 0;
}

double intial(double price, double dPayment)//initial loan balance
{
   double intLoan;//initial Loan Balance
   
   intLoan = price - dPayment;
   return(intLoan);
}

double mortgage(double IntLoan)//The interest for the annual cost
{
    double cost;
    
    cost = IntLoan * 0.09;//3% credit for paying off loan, 6% interest
    return(cost);
}

double taxRate(double intBal)//The Tax rate
{
    double saving;
    
    saving = intBal * 0.021;//35% of 6% interest payment
    return(saving);
}

double housecost(double mortCost, double taxrate)//The annual cost
{
    double cost;
    cost = mortCost - taxrate;
    return(cost);
}