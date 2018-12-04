/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on December 1, 2018, 4:57 PM
 */
const int max_size = 26;

#include <iostream>
using namespace std;

void deleteRepeats(char arr[], int size);

int main( )
{
    char arr[max_size]={'a','b','a','c'};
    int size = 4;
    
    cout << "This Program reads characters of a partially filled array and then "
            "deletes duplicates."<<endl;
    cout << "This is the original array:"<<endl;
    for (int index=0;index<size;index++)
    {
        cout<<arr[index]<<endl;
    }
    
    deleteRepeats(arr, size);
    
    cout << "And this is after running the program."<<endl;
    for (int index=0;index<size;index++)
    {
        cout<<arr[index]<<endl;
    }

    return 0;
}

void deleteRepeats (char arr[], int size)
{
    int num = size;
    int start = 0;

    while(start != num)
    {
        char test = arr[start];
        for(int a = start+1; a <= num;a++)
        {
            if(test==arr[a])
            {
                for(int b = a;b<num;b++)
                    {
                    arr[b] = arr[b+1];
                    }
                num-=1;
            }
        }
    start +=1;
    }
    size = num;
}