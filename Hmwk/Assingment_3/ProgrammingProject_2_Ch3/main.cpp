/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 2, 2018, 3:51 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main( )
{
    int another; //used for the loop
    double x_1, x_2, Va, Vb, Vc, value, realPrt, imaNum; /*x_1 and x_2 are the roots, 
                                         * value is the value of the first part of the equation  
                                         * Va,Vb,and Vc are the values plug into the equation
                                         * real part and imaginary number*/
    
    cout << "Press return after input."<<endl;
    cout << "This Program find the roots for a quadratic equation. (i.e. ax²+bx+c=0)"<<endl;
    cout << "Enter the value for 'a':"<<endl;
    cin >> Va;
    cout << "Enter the value for 'b':"<<endl;
    cin >> Vb;
    cout << "Enter the value for 'c':"<<endl;
    cin >> Vc;
    
    do
    {
         value= Vb*Vb - 4*Va*Vc;
    
    if (value > 0) 
    {
        x_1 = (-Vb + sqrt(value)) / (2*Va);
        x_2 = (-Vb - sqrt(value)) / (2*Va);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x_1 << endl;
        cout << "x2 = " << x_2 << endl;
    }
    
    else if (value == 0) 
    {
        cout << "Roots are real and same." << endl;
        x_1 = (-Vb + sqrt(value)) / (2*Va);
        cout << "x1 = x2 =" << x_1 << endl;
    }

    else 
    {
        realPrt = -Vb/(2*Va);
        imaNum =sqrt(-value)/(2*Va);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPrt << "+" << imaNum << "i" << endl;
        cout << "x2 = " << realPrt << "-" << imaNum << "i" << endl;
    }
         cout << "Another equation? Enter '1' for Yes, or '0' for No:"<<endl;
         cin >> another;
    }
    while (another > 0);

    return 0;
}

