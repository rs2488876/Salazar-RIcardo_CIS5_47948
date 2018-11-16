/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 16, 2018, 8:33 PM
 */

#include <iostream>
using namespace std;

int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double ttlGofS, wghInG, desWght=1, svntWgh, ttlCans; 
    /*ttlGofS is total grams of Soda, desWght is desired Weight in Lbs.
    wghInG is weight in grams, svntWgh is a 1/7th of the weight in grams.*/
    cout << "Press Return after entering required information." <<endl;
    cout << "Enter the the desire weight in pounds you want to be at the end of your diet:" <<endl;
    while (desWght > 0) {
        
        cin >> desWght;
        wghInG = ((desWght*45400)/100);
        svntWgh = (wghInG/7);
        ttlGofS = svntWgh/.001;
        ttlCans = ttlGofS/350;
        cout << "Your desired weight in grams is " << ((desWght*45400)/100) << " grams" <<endl;
        cout << "From research we can say that you can only take in" <<endl  
                << "1/7th of your total body weight of the sweetener."<<endl;
        /* 1/7th refers to a rat weighting 35 grams dies with 5 grams of sweetener. */
        cout << "A 1/7th of your desired body weight is " << svntWgh << " grams." <<endl;
        cout << "The total grams of soda you can drink for a desire weight of " << desWght << " lbs, is " 
                << ttlGofS << " grams," <<endl;
        cout << "or " << ttlCans << " cans." <<endl;
        cout << "Press Return after entering required information." <<endl;
        cout << "Enter the the desire weight in pounds you want to be at the end of your diet:" <<endl;
        cout << "(Enter '0' when done.)" <<endl;
    }
    cout << " " <<endl;
    cout << "Good Luck with your weight loss. :)" <<endl;
    return 0;
}