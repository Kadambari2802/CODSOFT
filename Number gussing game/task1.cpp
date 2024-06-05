#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
   cout<<"**********WELCOME TO NUMBER GUESSING GAME**********"<<endl;
   cout<<"**********LET'S CHECK YOUR LUCK**********"<<endl;

    srand(time(0));
    int a;
    int b;
    cout<<"Enter 1 for EASY mode"<<endl;
    cout<<"Enter 2 for MODERATE mode"<<endl;
    cout<<"Enter 3 for HARD mode"<<endl;
    cin>>b;

    while(b==1 || b==2 || b==3)
    {
        if(b==1)
        {
            a=rand()%10+1;
            cout<<"Well done,You choosed EASY mode"<<endl;
            cout<<"Guess the number in range from 1 to 10"<<endl;
        }
        else if(b==2)
        {
            a=rand()%100+1;
            cout<<"Well done,You choosed MODERATE mode"<<endl;
            cout<<"Guess the number in range from 1 to 100"<<endl;
        }
        else
        {
            a=rand()%1000+1;
            cout<<"Well done,You choosed HARD mode"<<endl;
            cout<<"Guess the number in range from 1 to 1000"<<endl;
        }

        int n;
        cout<<"Choose the number=";
        cin>>n;

        while(n!=a)
        {
            if(n<a)
            {
                cout<<"Your guess is too low"<<endl;
            }
            else
           {
            cout<<"Yourguess is too high"<<endl;
           }
           cout<<"Well tried"<<endl;
           cout<<"Choose again=";
           cin>>n;
        }
           cout<<"Congratulation!"<<endl;
           cout<<"You got it correct!"<<endl;
           cout<<"The number is "<<a<<endl;
           
           cout<<"Enter 1 for EASY mode"<<endl;
           cout<<"Enter 2 for MODERATE mode"<<endl;
           cout<<"Enter 3 for HARD mode"<<endl;
           cout<<"Enter any other key to exit the game"<<endl;
           cin>>b;
    }
    return 0;
}