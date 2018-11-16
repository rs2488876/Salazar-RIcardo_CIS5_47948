/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 27, 2018, 10:17 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   //Declare all Variables Here
    char a, b, c, d; //the four integers
    char f, s, t, fr;//first, second, third, and fourth digits from least to greatest
    
    //Input or initialize values Here
    cout << "Create a histogram chart."<<endl;
    cout << "Input 4 digits as characters."<<endl;
    cin >> a>>b>>c>>d;

//sorting     
    //Histogram Here
    switch (f) //first digit
    {
            case '9': cout << "9*********"<<endl; break;
            case '8': cout << "8********"<<endl; break;
            case '7': cout << "7*******"<<endl; break;
            case '6': cout << "6******"<<endl; break;
            case '5': cout << "5*****"<<endl; break;
            case '4': cout << "4****"<<endl; break;
            case '3': cout << "3***"<<endl; break;
            case '2': cout << "2**"<<endl; break;
            case '1': cout << "1*"<<endl; break;
            case '0': cout << "0"<<endl; break;
            default: cout << f << "?"<<endl; 
    }
    
    switch (s) //second digit
    {
            case '9': cout << "9*********"<<endl; break;
            case '8': cout << "8********"<<endl; break;
            case '7': cout << "7*******"<<endl; break;
            case '6': cout << "6******"<<endl; break;
            case '5': cout << "5*****"<<endl; break;
            case '4': cout << "4****"<<endl; break;
            case '3': cout << "3***"<<endl; break;
            case '2': cout << "2**"<<endl; break;
            case '1': cout << "1*"<<endl; break;
            case '0': cout << "0"<<endl; break;
            default: cout << s << "?"<<endl; 
    }
    
    switch (t) //third digit
    {
            case '9': cout << "9*********"<<endl; break;
            case '8': cout << "8********"<<endl; break;
            case '7': cout << "7*******"<<endl; break;
            case '6': cout << "6******"<<endl; break;
            case '5': cout << "5*****"<<endl; break;
            case '4': cout << "4****"<<endl; break;
            case '3': cout << "3***"<<endl; break;
            case '2': cout << "2**"<<endl; break;
            case '1': cout << "1*"<<endl; break;
            case '0': cout << "0"<<endl; break;
            default: cout << t << "?"<<endl; 
    }
    
    switch (fr) //fourth digit
    {
            case '9': cout << "9*********"<<endl; break;
            case '8': cout << "8********"<<endl; break;
            case '7': cout << "7*******"<<endl; break;
            case '6': cout << "6******"<<endl; break;
            case '5': cout << "5*****"<<endl; break;
            case '4': cout << "4****"<<endl; break;
            case '3': cout << "3***"<<endl; break;
            case '2': cout << "2**"<<endl; break;
            case '1': cout << "1*"<<endl; break;
            case '0': cout << "0"<<endl; break;
            default: cout << fr << "?"<<endl; 
    }
            
    //Exit
    return 0;
}