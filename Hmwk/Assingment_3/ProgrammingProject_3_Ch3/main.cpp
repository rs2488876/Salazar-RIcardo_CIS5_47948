/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 2, 2018, 4:35 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main( ) 
{
    string roman;
    int year, part;
    
    cout << "Enter a year between 1000-3000: "<<endl;
    cin >> year;
    
    if ((year>3000)||(year<1000))
    {
        cout << "Invalid year, try a different number please."<<endl;
    }
    else
    {
        if (year >= 1000)
        {
            part = (year/1000);
        }
        cout << "Roman Numeral: " <<roman <<endl;
    }
    return 0;
}

