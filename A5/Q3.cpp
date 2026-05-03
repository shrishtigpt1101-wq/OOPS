//  WOOP to Sum Two Private D.M. to Two different Classes. 

#include<iostream>
using namespace std;

class XYZ;
class ABC
{
	int x;
	public:
		void getdata()
		{
			cout<<"value of x: ";
			cin>>x;
		}
		friend void sum(ABC A, XYZ B);
};

class XYZ
{
	int z;
	public:
		void getdata()
		{
			cout<<"value of z: ";
			cin>>z;
		}
		friend void sum(ABC A, XYZ B);
};

void sum(ABC A, XYZ B)
{
	cout<<A.x + B.z;
}

int main()
{
	ABC P;
	P.getdata();
	
	XYZ Q;
	Q.getdata();
	
	sum(P,Q);
	
	return 0;
}
