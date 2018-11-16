/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 17, 2018, 7:22 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

double BMR(double weight);//Basal metabolic rate
double physAct(double intens, double weight, double minutes);// calories required for physical exercise 
double digest(double calsCon, double servings);//calories needed to digest food

int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double weight, intensity, minute, calCon, serv;//calories in serving and serving amount 
    double basal, active, energy;//BMR, physical activity, energy to digest food
    char ans;
    
    do
    {
    //program intro
    cout << "This program calculates your calory usage,"<<endl;
    cout << "according to your weight, calories eaten, and how long and hard you worked out for."<<endl;
    
    //inputs
    cout << "Please enter your weight:"<<endl;
    cin  >> weight;
    cout << "Please enter the estimated intensity between 1 and 40 of your activity:"<<endl;
    cin  >> intensity; 
    cout << "Please enter the amount of time (in minutes) spent doing your activity:"<<endl;
    cin  >> minute;
    cout << "Please enter the amount of calories from your favorite food:"<<endl;
    cin  >> calCon;
    cout << "Please enter the number of servings of your favorite food:"<<endl;
    cin  >> serv;
    
    //equations
    basal = BMR(weight);
    active = physAct(intensity, weight, minute);
    energy = digest(calCon, serv);
    
    //outputs
    cout << "The calories required for Basal metabolic rate are: " << basal 
            <<" Calories." <<endl;
    cout << "The calories required for your choice of physical activity are: " 
            << active << " Calories." <<endl;
    cout << "The calories required for digesting your favorite food are: "
            << energy << " Calories." <<endl;
    
    //loop
        cout << "New proposal?" <<endl
                << "Type 'y' for yes, or 'n' for no (press return):"<<endl;
        cin >> ans;
                
    }
    while (ans == 'y' || ans == 'Y');
    return 0;
}

double BMR(double weight)//Basal metabolic rate
{
    double cals;
    
    cals = 70 * pow((weight/2.2),0.756);
    return(cals);
}

double physAct(double intens, double weight, double minutes)// calories required for physical exercise
{
    double cals;
    
    cals = (0.0385 * intens * weight * minutes);
    return(cals);
}

double digest(double calsCon, double servings)//calories needed to digest food
{
    double cals;
    
    cals = ((calsCon*servings) * 0.1);
    return(cals);
}