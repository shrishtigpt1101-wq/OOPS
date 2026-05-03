/*
WOOP on Class Time to find difference between two Time
 (using both Member/ Friend) 
*/ 

#include<iostream>
using namespace std;

class time
{
	int hr, min, sec;
	
	public:
		void getdata()
		{
			cout<<"enter hour:";
			cin>>hr;
			
			cout<<"enter min:";
			cin>>min;
			
			cout<<"enter second:";
			cin>>sec;
		}
		
		void show()
		{
			cout<<hr<<":"<<min<<":"<<sec<<endl;
		}	
		
		time sub(time x)
		{
			time temp;
			temp.hr=hr-x.hr;
			temp.min=min-x.min;
			temp.sec=sec-x.sec;
			return temp;
		}
};

int main()
{
	time t1, t2 , t3;
	t1.getdata();
	t1.show();
	t2.getdata();
	t2.show();
	
	t3=t1.sub(t2);
	cout<<"difference between two Time";
	t3.show();
	
	return 0;
	
}
