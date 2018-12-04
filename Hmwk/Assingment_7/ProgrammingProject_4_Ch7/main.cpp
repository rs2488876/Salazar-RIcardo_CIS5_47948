/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on December 2, 2018, 9:21 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

double stanDev(double arr[]);

int main()
{    
    double arr[12]={35,3,50,27,30,28,7,27,25,34,18,45};
    
    cout << "This Program calculates the standard deviation of data in a partially"
            "/pre-filled array."<<endl;
    cout << "This is the current data."<<endl;
    for (int index = 0; index < 12; index++)
   {
       cout << arr[index] <<" ";
   }
    cout <<endl;
    stanDev(arr);
    
    cout << "The standard deviation is:"<<endl;
    cout << stanDev(arr);

    return 0;
}

double stanDev(double arr[])
{
    double sum =0, avg, step1=0, step2=0;
    for (int index = 0; index < 10; index++)
   {
       sum+=arr[index];
   }
    avg = sum/12;
    
    for(int index = 0; index < 12; index++)
    {
        step1 += pow((arr[index] - avg), 2);
    }
    step2 = sqrt(step1/12);
    
    return step2;
}