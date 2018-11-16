/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 10, 2018, 5:40 PM
 */

#include <iostream>
using namespace std;

const char PERCENT=100; //Percent conversion
const float BILLION=1e9f; //Billion conversion
const float TRILION=1E12F; //Trillion conversion

int main(int argc, char** argv) 
{
    //Variables
    float milBdgt, //Military Budget in $'s
          fedBdgt, //Federal Budget in $'s
          percMil; //Percentage of Mil/Fed's %
    
    //https://en.wikipedia.org/wiki/2018_United_States_federal_budget
    fedBdgt=4.094e12f; //4.1 trillion dollars
    //https://www.cnn.com/2018/03/28/politics/us-military-spending-items-intl/index.html
    milBdgt=700.0e9f; //700 billion dollars 
    
    //Equation
    percMil=milBdgt/fedBdgt*PERCENT; //Percentage Military Budget
    
    //Output
    cout << "The Federal Budget = $"<<fedBdgt/TRILION<<" Trillion"<<endl;
    cout << "The Military Budget = $"<<milBdgt/BILLION<<" Billion"<<endl;
    cout << "Percentage Military Budget = "<<percMil<<"%"<<endl;
    
    return 0;
}