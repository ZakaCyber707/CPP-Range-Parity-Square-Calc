#include<iostream>
using namespace std;
int main(){
	
	int lowerLimit=0;
	int upperLimit=0;
	int square=0;
	
	cout<<"Enter number for lower limit: ";
	cin>>lowerLimit;
	lowerLimit++;
	cout<<"Enter number for upper limit: ";
	cin>>upperLimit;
	cout<<endl;
	
	while(lowerLimit<upperLimit)
	{
	
	if(lowerLimit%2==0)
	{
		cout<<"\nEven number:"<<lowerLimit<<endl;
		square=lowerLimit*lowerLimit;
		cout<<"square of even numbers:"<<square<<endl;
		lowerLimit++;
	}
	
	
	else 
	{
		cout<<"\nOdd number:"<<lowerLimit<<endl;
		square=lowerLimit*lowerLimit;
		cout<<"square of odd numbers:"<<square<<endl;
		lowerLimit++;
	}
	
	}
	
	}
	

