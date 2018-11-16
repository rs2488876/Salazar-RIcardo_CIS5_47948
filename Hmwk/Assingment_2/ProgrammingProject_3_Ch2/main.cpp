/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 17, 2018, 8:01 PM
 */

#include <iostream>
using namespace std;

int main( ) 
{
    double newSala, oldSala=1, mnthSal, numOfMth=1 ; /* newSala is the new yearly salary, 
        * oldSala is the old  yearly salary, mnthSal is the new monthly salary*/
    
    cout << "Press Return after entering required information." <<endl;
    cout << "Enter employee's last year salary:" <<endl << "$ ";
    while (oldSala > 0 or numOfMth >0) {
        
        cin >> oldSala;
        cout << "Enter the amount of months the pay is for:" <<endl;
        cin >> numOfMth;
        newSala = oldSala * (1+(.006333*numOfMth)) ;
        mnthSal = newSala/12;
        cout << "The New  Yearly Salary for the employee is $" << newSala <<endl;
        cout << "And there new mothly salary is $" << mnthSal <<endl;
        cout << " " <<endl;
        cout << "Enter employee's last year salary:" <<endl 
                << "(enter '0' when done)" << endl << "$ ";
    }
    return 0;
}