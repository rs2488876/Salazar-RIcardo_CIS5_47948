/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 26, 2018, 5:07 PM
 */

#include <iostream>
using namespace std;

int main( ) 
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double gasPric, galPric, compProf, priceDif, taxDif; /*gasPrice is how much the individual paid 
            per gallon, galPric is how much the company paid per gallon, 
            compProf is how much the company make off each gallon they sell*/ 
    
    /* Taxes:
     39 cents for excise tax/gallon
     8% sales tax
     10 cents for cap and trade “fee”—tax on a tax/gallon
     18.4 cents federal excise tax/gallon*/
    
    cout << "Press Return after entering required information." <<endl;
    cout << "Enter the how much you paid for gas per gallon:" <<endl << "$";
    cin >> gasPric;
    galPric = ((gasPric/1.08)-0.39-0.10-0.184)/1.065;
    priceDif = gasPric-galPric;
    compProf = ((gasPric/1.08)-0.39-0.10-0.184)*.065;
    taxDif = priceDif - compProf;
    cout << "At $" << gasPric << " per gallon, the company pays $" << galPric 
            << " for the same gallon." <<endl;
    cout << "That is a $" << priceDif << 
            " difference, and how much more you are paying for" 
            << " the taxes, and their profit margin." << endl;
    cout << "From the $" << priceDif << ", $" << taxDif << " goes to taxes, and $";
    cout << compProf << " goes to the company.";
    return 0;
}

