/*
C++ 1.WOOP in C++ to find factorial, even-odd check, negative positive check on number.
*/

#include<iostream>
using namespace std;

class number
{
	private:
		int n;
	public:
		void getdata()
		{
			cout<<"enter the number: ";
			cin>>n;
		}
		
		int factorial(int n)
		{
			if(n<0)
				cout<<"negative not valid"<<endl;	
			if(n==0 || n==1)
				return 1;
			return n*factorial(n-1);
		}
		
		int fact()
		{
			return factorial(n);
		}

		void checkpn()
		{
			if(n<0)
				cout<<"number is negative"<<endl;
			else if (n>0)
				cout<<"number is positive "<<endl;
			else
				cout<<"number is zero";
		}

		void odd_even()
		{
			if(n%2==0)
				cout<<"number is even "<<endl;
			else 
				cout<<"number is odd "<<endl;
		}
};

int main()
{
	number n1;
	
	n1.getdata();
	cout<<"factorial : "<< n1.fact()<<endl;
	n1.odd_even();
	n1.checkpn();
	
	return 0;
}