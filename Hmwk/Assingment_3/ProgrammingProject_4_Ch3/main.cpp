/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 3, 2018, 7:13 PM
 */

#include <iostream>
using namespace std;

int main( ) 
{
    int handSize, card;
    char 2, 3, 4, 5, 6, 7, 8, 9;

    cout << "Enter how many cards you have in your hand(2-5): "<<endl;
    cin >> handSize;
    
    {
    if ((handSize<2)||(handSize>5))
    {
        cout << "Invalid hand size, enter another value:"<<endl;
        cin >> handSize;
    }
    
    else
    {
        switch (handSize)
                case 2 
                        cout << ""
    }
    }
    return 0;
}

