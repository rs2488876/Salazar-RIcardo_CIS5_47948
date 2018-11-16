/* 
 * File:   main.cpp
 * Author: Ricardo Jr
 *
 * Created on October 23, 2018, 7:25 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main( )
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //constant for min and max
    int const MIN=0,MAX=36;
    /*game type, answer(for loop), color (black or red)
     *even or odd, value (high or low)
     */
    char gamtyp, ans, color, evod, value;
    //number player bets on, random number generated
    int number, random;
    //hoe much player bets, total winnings
    float bet, winTotl=100;
    
    
    
    //Game starts
    cout << "Welcome to The Aurora Casino Roulette"<<endl;
    cout << "To get you started we are giving you $100 in chips free."<<endl;
    cout << "GOOD LUCK!!!!"<<endl;
    
    do
    {
    //Random number seed
    srand((time(NULL)));
    random=(rand()%(37));
    
    cout << "How much would you like to bet:"<<endl << "$";
    cin >> bet;
    cout << "Would you like to bet on a Specific Number(N), Even/Odd(E), Color(C), "<<endl;
    cout << "or High/Low(H)?"<<endl;
    cin >> gamtyp;
    
    //If player selects specific number
    switch (gamtyp)
    {
        //specific number
        case 'n':
        case 'N':
        {
           cout << "What number would you like to put your bets on?"<<endl;
           cin >> number;
           if (number<MIN||number>MAX)
           {
               cout << "Not a valid number"<<endl;
           }
           
           cout << "And the lucky number is "<< random <<endl;
           
           //lose
           if (number!= random)
           {
               cout << "You lose $"<< bet <<endl;
               cout << "Better luck next time."<<endl;
               winTotl-=bet;
           }
           
           //win
           else
           {
               if (bet>2)
               {
                   cout << "Winner, Winner, chicken dinner!! "<<endl;
               }
               cout << "You won $" << bet*35 <<endl;
               winTotl+=35*bet;
           }
        }
        break;
        
        //Odd and Even
        case 'e':
        case 'E':
        {
            cout << "Would you like to bet on even (E) or Odd (O)?"<<endl;
            cin >> evod;
            
            cout << "And the lucky number is "<< random <<endl;
            
            //even
            if (evod == 'e' || evod == 'E')
            {
                //lose
                if (random%2==1)
                {
                    cout << "You lose $"<< bet <<endl;
                    cout << "Better luck next time."<<endl;
                    winTotl-=bet; 
                }
                //win
                else
                {
                   if (bet>2)
                    {
                        cout << "Winner, Winner, chicken dinner!! "<<endl;
                    }
                    cout << "You won $" << bet*2 <<endl;
                    winTotl+=2*bet; 
                }
            }
            //Odd
            else if (evod=='o'||evod=='O')
            {
              //win
                if (random%2==1)
                {
                    if (bet>2)
                    {
                        cout << "Winner, Winner, chicken dinner!! "<<endl;
                    }
                    cout << "You won $" << bet*2 <<endl;
                    winTotl+=2*bet;
                }
                //lose
                else
                {
                    cout << "You lose $"<< bet <<endl;
                    cout << "Better luck next time."<<endl;
                    winTotl-=bet;
                }
            }
            else
            {
                cout << "Invalid input, Try again!"<<endl;
            }
        }
        break;
        
        // Color: Black(odd) or Red(even)
        case 'c':
        case 'C':
        {
            cout << "What color would you like to bet on Black(B) or Red(R)?"<<endl;
            cin >> color;
            
            cout << "And the lucky number is "<< random <<endl;
            //Black
            if (color=='b'||color=='B')
            {
                //win
                if (random%2==1)
                {
                    if (bet>2)
                    {
                        cout << "Winner, Winner, chicken dinner!! "<<endl;
                    }
                    cout << "You won $" << bet*2 <<endl;
                    winTotl+=2*bet;
                }
                //lose
                else
                {
                    cout << "You lose $"<< bet <<endl;
                    cout << "Better luck next time."<<endl;
                    winTotl-=bet;
                }
            }
            //Red
            else if (color=='r'||color=='R')
            {
                //lose
                if (random%2==1)
                {
                    cout << "You lose $"<< bet <<endl;
                    cout << "Better luck next time."<<endl;
                    winTotl-=bet; 
                }
                //win
                else
                {
                   if (bet>2)
                    {
                        cout << "Winner, Winner, chicken dinner!! "<<endl;
                    }
                    cout << "You won $" << bet*2 <<endl;
                    winTotl+=2*bet; 
                }
            }
            else
            {
                cout << "Invalid input, Try again!"<<endl;
            }
        }
        break;
        
        //High or Low; Low=1-18 High=19-36
        case 'h':
        case 'H':
        {
            cout << "Would you like to bet High(H) or Low(L)?"<<endl;
            cout << "(High is 19-36, Low is 1-18)"<<endl;
            cin >> value;
            
            cout << "And the lucky number is "<< random <<endl;
            //High
            if (value=='h'||value=='H')
            {
               //win
                if (random>=19&&random<=36)
                {
                    if (bet>2)
                    {
                        cout << "Winner, Winner, chicken dinner!! "<<endl;
                    }
                    cout << "You won $" << bet*2 <<endl;
                    winTotl+=2*bet; 
                }
                //loser
                else
                {
                    cout << "You lose $"<< bet <<endl;
                    cout << "Better luck next time."<<endl;
                    winTotl-=bet; 
                }
            }
            else if (value=='l'||value=='L')
            {
               //win
                if (random>=1&&random<=18)
                {
                    if (bet>2)
                    {
                        cout << "Winner, Winner, chicken dinner!! "<<endl;
                    }
                    cout << "You won $" << bet*2 <<endl;
                    winTotl+=2*bet; 
                }
                //loser
                else
                {
                    cout << "You lose $"<< bet <<endl;
                    cout << "Better luck next time."<<endl;
                    winTotl-=bet; 
                } 
            }
            else
            {
                cout << "Invalid input, Try again!"<<endl;
            }
        }
        break;
        
        default:
        {
            cout << "Not a valid input try again"<<endl;
        }
        
       
        
    }
    //total wins and loop
    if (winTotl<=0)
    {
        cout << "You lost all your money you should stop now!"<<endl;
        ans='n';
    }
    else
    {
        cout << "You currently have $"<<winTotl<<endl;
    
        //loop
         cout << "Feeling lucky? Would you like to play again?"<<endl;
         cout << "Yes (Y) or No (N)?:"<<endl;
         cin >> ans;
    }
    }
    while(ans=='y'||ans=='Y');

    return 0;
}