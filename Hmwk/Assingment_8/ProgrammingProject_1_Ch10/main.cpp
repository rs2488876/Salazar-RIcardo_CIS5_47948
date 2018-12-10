/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on December 9, 2018, 3:04 PM
 */

#include <iostream>
using namespace std;

//structure
struct student
{
    double quiz1, quiz2, midterm, exam;//all scores
};

//function
void getdata(student& grade);

//main body
int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    student grade;
    getdata (grade);
    
    double ttlgrad;//total grade in numbers
    char letter;//letter grade
    
    ttlgrad=((((grade.quiz1+grade.quiz2)*.25)+(grade.midterm*.25)+(grade.exam*.5))/80)*100;
    /*weighting each grade to what they're worth, both quizzes together are 25%
     the midterm is also worth 25%, and final is worth 50%*/
    
    //if-else statement for calculating letter grade
    if (ttlgrad >=90 )
    {
        letter = 'A';
    }
    else if (ttlgrad<90 && ttlgrad>=80)
    {
        letter = 'B';
    }
    else if (ttlgrad<80 && ttlgrad>=70)
    {
        letter = 'C';
    }
    else if (ttlgrad<70 && ttlgrad>=60)
    {
        letter = 'D';
    }
    else
    {
        letter = 'F';
    }
    
    cout << "Your final grade for the semester is " << letter<<endl;
            
    return 0;
}

void getdata (student& grade)
{
    cout << "This program calculates the final letter grade of the student."<<endl;
    cout << "Enter the score for the first quiz(0-10):"<<endl;
    cin >> grade.quiz1;
    cout << "Enter the score for the second quiz(0-10):"<<endl;
    cin >> grade.quiz2;
    cout << "Enter the score for the midterm(0-100):"<<endl;
    cin >> grade.midterm;
    cout << "Enter the score for the final exam(0-100):"<<endl;
    cin >> grade.exam;
}