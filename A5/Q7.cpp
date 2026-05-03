/*WOOP on Class Integer to Add / Multiply two Integers 
(using both Member/ Friend) */

#include<iostream>
using namespace std;

class Integer
{
	int x;
	public:
		void getdata()
		{
			cout<<"enter integer:";
			cin>>x;
		}
		
		void show()
		{
			cout<<"integer : "<<x<<endl;
		}
		
		Integer add(Integer a)
		{
			Integer temp;
			temp.x=x+a.x;
			return temp;
		}
		
		Integer sub(Integer a)
		{
			Integer temp;
			temp.x=x-a.x;
			return temp;
		}
};

int main()
{
	Integer obj1, obj2,obj3 ;
	
	obj1.getdata();
	obj2.getdata();
	
	obj3=obj1.add(obj2);
	cout<<"addition:";
	obj3.show();
	
	obj3=obj1.sub(obj2);
	cout<<"subtraction:";
	obj3.show();
	
	return 0;
}