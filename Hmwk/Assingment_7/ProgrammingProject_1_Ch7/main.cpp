/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on December 1, 2018, 9:08 AM
 */
const int arrSize=10;

#include <iostream>
using namespace std;

void filArrA(char arrA[]);
void filArrB(char arrB[]);
int add (char arrA[], char arrB[], char sum[]);

int main( )
{
    char hex1[10], hex2[10], sum[10];
    char ans;
    
    cout << "This Program adds two hexadecimal numerals and outputs the sum in "
            "hexadecimal and decimal values."<<endl;
    filArrA(hex1);
    
    return 0;
}

void filArrA (char arrA[])
{
    cout << "Enter the first hex number(no more than 10 digits):"<<endl;
   for (int index = 0; index < 10; index++)
   {
       cin >> hex >> arrA[index];
   }
    cout << hex << arrA[0]+arrA[1]<<endl;
    cout << arrA[0]+arrA[1];
}

void filArrB (char arrB[])
{
    for (int index = 0; index < 10; index++)
   {
       cin >> hex >> arrB[index];
   }
    
}

int add (char arrA[], char arrB[], int sum[])
{
    
    return sum[0];
}