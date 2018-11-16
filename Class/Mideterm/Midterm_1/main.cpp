/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 25, 2018, 6:48 PM
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv)
{
    //Declare all Variables Here
    unsigned short size;
    char shape,ans;       //f-> forward b->backward x->cross
    
do
{
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>size>>shape;
    
    //Draw the shape
    if (shape=='x')
    {
        if (size%2==1)
        {
            //odd cross
            for (int row=size;row>0;row--)
            {
            for (int colum=size;colum>=1;colum--)
            {
                if ((row==colum) || (colum==(size+1)-row))
                {
                    cout <<colum;
                }
                else cout <<" ";
            }
            cout <<endl;
            }
        }
        else
        {
            //cross (even)
            for (int row=size;row>0;row--)
            {
                for (int colum=1;colum<=size;colum++)
                {
                    if ((row==colum) || (colum==(size+1)-row))
                    {
                        cout <<colum;
                    }
                    else cout <<" ";
                }
                cout <<endl;
            }
        }
    }
    
    else if (shape=='b')
    {
        if (size%2==1)
        {
            //back slash odd
            for (int row=size;row>0;row--)
            {
                for (int colum=size;colum>=1;colum--)
                {
                    if (row==colum)
                    {
                        cout <<row;
                    }
                    else cout <<" ";
                }
                cout <<endl;
            }
        }
        else
        {//back slash even
           for (int row=1;row<=size;row++)
            {
                for (int colum=1;colum<=size;colum++)
                {
                    if (row==colum)
                    {
                        cout <<row;
                    }
                    else cout <<" ";
                }
                cout <<endl;
            } 
        }
    }
    
    else if (shape=='f')
    {
        if(size%2==0)
        {
            //forward slash even
            for (int row=size;row>0;row--)
            {
                for (int colum=1;colum<=size;colum++)
                {
                    if (row==colum)
                    {
                        cout <<row;
                    }
                    else cout << " ";
                }
                cout <<endl;
            }
        }
        else 
        {//forward slash odd
            for (int row=1;row<=size;row++)
        {
            for (int colum=size;colum>=1;colum--)
            {
                if (row==colum)
                {
                    cout <<row;
                }
                else cout << " ";
            }
            cout <<endl;
        }
        }
    }
    
    else
    {
        cout << "Wrong inputs!! try something else please."<<endl;
    }
    
    //loop
    cout << "New proposal?" <<endl
         << "Type 'y' for yes, or 'n' for no (press return):"<<endl;
    cin >> ans;
}
while (ans == 'y' || ans == 'Y');
    //Exit
    return 0;
}