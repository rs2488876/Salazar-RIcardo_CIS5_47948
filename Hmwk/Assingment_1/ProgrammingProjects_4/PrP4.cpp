/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 9, 2018, 8:38 PM
 */

#include <iostream>
using namespace std;

int main ( )
{
    int time, Distanc;
    cout << "Press return after entering a number.\n";
    cout << "Enter how long the object was in freefall, in seconds:\n";
    cin >> time;
    Distanc = (32 * (time * time)) / 2;
    cout << "If the object was in freefall for ";
    cout << time;
    cout << " seconds,\n";
    cout << "then the object would have traveled ";
    cout << Distanc;
    cout << " feet.\n";
    return 0;
}