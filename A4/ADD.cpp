/*
 WOOP for Addition 
 ( 2 int, 2 double, 1int 1 float, 3 int, 1 float 1 int)
*/
#include<iostream>
using namespace std;

class Add
{
	public:
		void add(int a, int b)
		{
			cout<<"add int:"<<a+b<<endl;
		}
		
		void add(double a, double b)
		{
			cout<<"add double:"<<a+b<<endl;
		}
		
		void add(int a, float b)
		{
			cout<<"add int + float:"<<a+b<<endl;
		}
		
		void add(int a, int b, int c)
		{
			cout<<"sum of three int : "<<a+b+c<<endl;
		}
		
		void add(float a, int b)
		{
			cout<<"add float + int :"<<a+b<<endl;
		}
};

int main()
{
	Add a;
	
	float o,d;
	double x,y;
	int z,b,s,w,e,r,p;
	
	cout<<"enter int number z,b:"; cin>>z>>b;
	a.add(z,b);
	
	cout<<"enter double number x,y:"; cin>>x>>y;
	a.add(x,y);
	
	cout<<"enter int and float number s,d:"; cin>>s>>d;
	a.add(s,d);
	
	cout<<"enter 3 int number w,e,r:"; cin>>w>>e>>r;
	a.add(w,e,r);

	cout<<"enter float and int number o,p:"; cin>>o>>p;
	a.add(o,p);
	
	return 0;
}
