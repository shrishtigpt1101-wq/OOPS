/* WOOP for Area of (circle, rectangle, triangle) */

#include<iostream>
using namespace std;
class Area{
	public:
		void area (double r){   
		cout<<"area of circle:"<<3.14*r*r<<endl;
		
	}
		void area(double l, double b){
		   cout<<"area of rectangle:"<<l*b<<endl;
		   
	}
		void area(double b, double h,int) { 
		cout<<"area of triangle:"<<0.5*b*h<<endl;
		
		
	}
		   	
};
int main(){
	Area a;
	a.area(7);
	a.area(6,9);
	a.area(6,9,2);	
	return 0;
}