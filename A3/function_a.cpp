/* WOOP/WAP in C++ to swap two variables using Call by Value, Call by Address and Call by Reference. */

#include<iostream>
using namespace std;

class Number
{
	public:
		void swapv(int a, int b)	// Call by Value	
		{
			int temp;
			temp=a; 
			a=b; 
			b=temp;
			
			cout<<" value of x: "<<a<<endl;
			cout<<" value of y: "<<b<<endl;
		}
		
		void swapa( int *p,int *q)	// Call by Address
		{
			int temp=*p;
			*p=*q;
			*q=temp;
			
			cout<<" value of x: "<<*p<<endl;
			cout<<" value of y: "<<*q<<endl;
		}
		
		void swapr(int &x, int &y)	// Call by Reference
		{
			int temp;
			temp=x; 
			x=y; 
			y=temp;
			
			cout<<" value of x: "<<x<<endl;
			cout<<" value of y: "<<y<<endl;
		}
};

int main()
{
	int x, y;
	Number n;
	cout<<"enter x and y :";
	cin>>x>>y;
	n.swapv(x,y);	// Call by Value 
	n.swapa(&x,&y); // Call by Address
	n.swapr(x,y); // Call by Reference
	return 0;
}
