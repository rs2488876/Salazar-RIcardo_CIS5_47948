/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 17, 2018, 4:29 PM
 */

#include <iostream>
using namespace std;

double hatSize(double weightLb, double heightIn);/*The hat size by using weight in lb.
                                              * and height in inches*/
double jacketSize(double weight, double height, int age);/*The jacket size, chest size,
                                                      *  in inches*/
double waistSize(double weight, int age);//waist size in inches
double jacketSizeTen(double weight, double height, int age);/*The jacket size, chest size,
                                                      *  in inches, in ten years*/
double waistSizeTen(double weight, int age);//waist size in inches in ten years

int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //variables
    double hat, jacket, waist;//variables to set equations equal to.
    double jacketTen, waistTen;//jacket and waist size in ten years 
    double height, weight;
    int age;
    char ans;
    
    //program intro
    cout << "This program calculates your hat size, jacket size, and waist size,"<<endl;
    cout << "according to your height, weight, and age."<<endl;
    
    do
    {
        //inputs
        cout << "Please enter your height in inches(rounded):"<<endl;
        cin >> height;
        cout << "Please enter your weight in pounds(rounded for best results):"<<endl;
        cin >> weight;
        cout << "And finally, please enter your age:"<<endl;
        cin >> age;

        //equations
        hat = hatSize(weight, height);
        jacket = jacketSize(weight, height, age);
        waist = waistSize(weight, age);
        jacketTen = jacketSizeTen(weight, height, age);
        waistTen = waistSizeTen(weight, age);

        //outputs
        cout << "With a height of " << height << " inches, weight of " << weight <<
                "lb, at " << age << " years old"<<endl;
        cout << "Your hat size is " << hat << "." <<endl;
        cout << "Your jacket (chest) size is " << jacket << " inches."<<endl;
        cout << "Your waist size, in inches, is " << waist << " inches."<<endl;
        cout << "And in ten years your jacket and waist sizes will be"<<endl
                << jacketTen << " inches and "
                << waistTen << " inches respectively."<<endl;
    
     //loop
        cout << "New proposal?" <<endl
                << "Type 'y' for yes, or 'n' for no (press return):"<<endl;
        cin >> ans;
                
    }
    while (ans == 'y' || ans == 'Y');
    return 0;
}

double hatSize(double weightLb, double heightIn)/*The hat size by using weight in lb.
                                              * and height in inches*/
{
    double HS;//hat size shorthand 
    
    HS = (weightLb/heightIn)*2.9;
    return(HS);
}

double jacketSize(double weight, double height, int age)/*The jacket size, chest size,
                                                      *  in inches*/
{
    double JS;//Jacket size
    if (age >= 40)
    {
        JS = ((height*weight)/288) + (((age-30)/10)*0.125);
    }
    else
    {
        JS = ((height*weight)/288);
    }
    return(JS);
}

double waistSize(double weight, int age)//waist size in inches
{
    double WS;
    if (age >= 30)
    {
        WS = (weight/5.7) + (((age-28)/2)*0.1);
    }
    else {
        WS = weight/5.7;
    }
    return(WS);
}

double jacketSizeTen(double weight, double height, int age)/*The jacket size, chest size,
                                                      *  in inches*/
{
    double JST, ageTen;//Jacket size
    ageTen= age + 10;
    if (ageTen >= 40)
    {
        JST = ((height*weight)/288) + (((ageTen-30)/10)*0.125);
    }
    else
    {
        JST = ((height*weight)/288);
    }
    return(JST);
}

double waistSizeTen(double weight, int age)//waist size in inches
{
    double WST, ageTen;
    ageTen = age + 10;
    if (ageTen >= 30)
    {
        WST = (weight/5.7) + (((ageTen-28)/2)*0.1);
    }
    else {
        WST = weight/5.7;
    }
    return(WST);
}