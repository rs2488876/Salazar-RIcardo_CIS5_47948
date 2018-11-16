/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 4, 2018, 6:26 PM
 */

#include <iostream>
using namespace std;

int main ( )
{
    int numberOfCases, sodasPerCase, totalSodas;
    cout << "Press return after entering a number.\n";
    cout << "Enter how many cases of sodas you have:\n";
    cin >> numberOfCases;
    cout << "Enter the number of sodas in a case:\n";
    cin >> sodasPerCase;
    totalSodas = numberOfCases * sodasPerCase;
    cout << "If you have ";
    cout << numberOfCases;
    cout << " cases\n";
    cout << "and ";
    cout << sodasPerCase;
    cout << " sodas in each case, then\n";
    cout << "you have ";
    cout << totalSodas;
    cout << " sodas in all the cases.\n";
    return 0;
}