/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 4, 2018, 8:54 PM
 */

#include <iostream>
using namespace std;

int main ( )
{
    float Dime, Quarter, Nickel, totalCents;
    cout << "Press return after entering a number.\n";
    cout << "Enter how many quarters you have:\n";
    cin >> Quarter;
    cout << "Enter how many dimes you have:\n";
    cin >> Dime;
    cout << "Enter how many nickels you have:\n";
    cin >> Nickel;
    totalCents = ((25 * Quarter) + (10 * Dime) + (5 * Nickel)) / 100;
    cout << "If you have ";
    cout << Quarter;
    cout << " quarters,\n";
    cout << Dime;
    cout << " dimes, and ";
    cout << Nickel;
    cout << " nickels, \n";
    cout << "then you will have $";
    cout << totalCents;
    cout << " in total.\n";
    return 0;
} 