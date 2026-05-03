/* WAP in C++ Test use of reference variable over basic datatype. 
(int,double,char)  */

#include<iostream>
using namespace std;

class Number
{
	private:
		int a;
		char c;
		double b;
	public:
		void getdata()
		{
			cout<<"A(int) , B(double) , C(char) VALUES : ";
			cin>>a>>b>>c;
		}
		void ref()
		{			
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
			cout<<"C: "<<c<<endl;
			
			int &refa=a;	// it will refer to the original variable, so any changes made to the reference variable will affect the original variable.
			char &refc=c;
			double &refb=b;
			
			refa=100;
			refc='g';
			refb=99.9;
			
			cout<<"A: "<<a<<endl;
			cout<<"B: "<<b<<endl;
			cout<<"C: "<<c<<endl;	
		}
};

int main()
{
	Number n;
	n.getdata();
	n.ref();
	
	return 0;
}
