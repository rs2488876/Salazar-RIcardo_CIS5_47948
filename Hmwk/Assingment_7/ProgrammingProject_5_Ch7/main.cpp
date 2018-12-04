/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on December 2, 2018, 12:21 PM
 */
const int maxSize =10;

#include <iostream>
using namespace std;

int filArr1(char arrA[], int maxsize, int& numUse);
void filArr2(char arrB[], int maxsize, int& numUse);
void sum(char arrA[], char arrB[], int maxsize, int& numUse);

int main( )
{
    char arr1[maxSize], arr2[maxSize];
    int numUse, numUse2;
    
    cout << "This Program adds two number made up from an array."<<endl;
    filArr1(arr1, maxSize, numUse);
    filArr2(arr2, maxSize, numUse);
    sum(arr1, arr2, maxSize, numUse);
    cout << numUse;
    return 0;
}

int filArr1(char arrA[], int maxsize, int& numUse)
{
    cout << "Enter a number up to "<< maxsize << " digits long."<<endl;
    for (int index = 0; index < 10; index++)
   {
       cin >> arrA[index];
    numUse= index;
   }
    return numUse;
}