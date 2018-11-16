/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 17, 2018, 7:33 PM
 */

#include <iostream>
using namespace std;

int main( ) 
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double newSala, oldSala=1, mnthSal,hlfOlSal; /* newSala is the new yearly salary, 
        * oldSala is the old  yearly salary, mnthSal is the new monthly salary*/
    
    cout << "Press Return after entering required information." <<endl;
    cout << "Enter employee's last year salary:" <<endl << "$ ";
    while (oldSala > 0) {
        
        cin >> oldSala;
        hlfOlSal = oldSala/2;
        newSala = hlfOlSal+(hlfOlSal * 1.076);
        mnthSal = newSala/12;
        cout << "The New  Yearly Salary for the employee is $" << newSala <<endl;
        cout << "And there new mothly salary is $" << mnthSal <<endl;
        cout << " " <<endl;
        cout << "Enter employee's last year salary:" <<endl 
                << "(enter '0' when done)" << endl << "$ ";
    }
    return 0;
}