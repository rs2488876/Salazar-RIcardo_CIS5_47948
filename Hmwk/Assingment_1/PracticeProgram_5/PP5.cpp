/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 3, 2018, 9:11 PM
 */

#include <iostream>
using namespace std;

int main ( )
{
    int width, height, totalLenght;
    cout << "Press return after entering a number.\n";
    cout << "Enter the length, in feet, of one of the short sides of the fence:\n";
    cin >> width;
    cout << "Enter the length, in feet, of one of the longer sides of the fence:\n";
    cin >> height;
    totalLenght = 2 * (width + height);
    cout << "If you have ";
    cout << width;
    cout << " feet on one of the short sides of the fence\n";
    cout << "and ";
    cout << height;
    cout << " feet on one of the longer sides of the fence, then\n";
    cout << "you will need ";
    cout << totalLenght;
    cout << " feet of fencing.\n";
    return 0;
}