#include<iostream>
using namespace std;
int main()
{
	char opn;
	float value1,value2;
	cout<<"Enter Oprator(+ - * /) =";
	cin>>opn;
	cout<<"Enter first value=";
	cin>>value1;
	cout<<"Enter second value=";
	cin>>value2;
	
	switch(opn)
	{
		case '+':
			{
				cout<<"Addition is "<<value1+value2;
				break;
			}
		case '-':
			{
				cout<<"Substraction is "<<value1-value2;
				break;
			}
		case '*':
			{
				cout<<"Multiplication is "<<value1*value2;
				break;
			}
		case '/':
			{
				cout<<"Division is "<<value1/value2;
				break;
			}
		default:
			{
			cout<<"Invalid oprator";
		    }
	
	return 0;}
}