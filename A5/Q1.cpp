//  WOOP on Class Complex to Add, Subt and Multiply Two Complex No.
 
#include<iostream>
using namespace std;

class Complex
{
	float real;
	float img;
	
	public:
		void getdata(float a=0 , float b=0)
		{
			real=a;
			img=b;
		}
		
		friend Complex multiply(Complex x, Complex y)	// friend function
		{
			Complex temp;
			temp.real=x.real * y.real - x.img * y.img;
			temp.img=x.real * y.real + x.img * y.img;
			return temp;
		}
		
		Complex add (Complex z)	// member function
		{
			Complex temp;
			temp.real=real + z.real;
			temp.img=img+z.img;
			return temp;
		}
		
		Complex sub(Complex z)	// member function
		{
			Complex temp;
			temp.real=real - z.real;
			temp.img=img - z.img;
			return temp;
		}
		
		void show()
		{
			cout<<real<<"+ i "<<img<<endl;
		}		
};

int main()
{
	Complex c1,c2,c3,c4,c5;
	
	c1.getdata(1.5,2.0);
	c2.getdata(4.0,1.5);
	
	c3=multiply(c1,c2);
	cout<<"MULTIPLY: ";
	c3.show();
	
	c4=c1.add(c2);
	cout<<"ADDITION: ";
	c4.show();
	
	c5=c1.sub(c2);
	cout<<"SUBTRACT: ";
	c5.show();
	
	return 0;
}