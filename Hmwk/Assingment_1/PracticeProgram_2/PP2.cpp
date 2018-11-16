/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on September 3, 2018, 5:55 PM
 */

#include <iostream>
using namespace std;

int main ( )
{
    int numberOfPods, peasPerPod, totalPeas;
    cout << "Hello\n";
    cout << " \n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> numberOfPods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peasPerPod;
    totalPeas = numberOfPods * peasPerPod;
    cout << "If you have ";
    cout << numberOfPods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    cout << " \n";
    cout << "Good-bye\n";
    return 0;
}