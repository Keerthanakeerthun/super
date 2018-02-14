#include <iostream>

int main() 
{
	float num;

	cout<<"Enter a number:";
	cin>>num;
	if(num>0)
	{
	    cout<<num<<" is positive number"<<endl;
	}
	else if(num<0)
	{
	    cout<<num<<" is negative number"<<endl;
	}
	else
	{
	    cout<<num<< " is neither positive nor negative"<<endl;
	}
	return 0;
}
