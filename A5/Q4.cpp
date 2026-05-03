//  WOOP to Swap Two Private D.M. to Two different Classes. 

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
		
		void showABC()
		{
			cout<<"Class ABC --> x : "<<x<<endl;
		}
		
		friend void swap(ABC &A, XYZ &B); // reference variable of class ABC and XYZ
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
		
		void showXYZ()
		{
			cout<<"Class XYZ --> z : "<<z <<endl;
		}
		
		friend void swap(ABC &A, XYZ &B);
};

void swap(ABC &A, XYZ &B)
{
	int temp;
	temp=A.x;
	A.x=B.z;
	B.z=temp;
	
}

int main()
{
	ABC P;
	P.getdata();
	
	XYZ Q;
	Q.getdata();
	
	swap(P,Q);
	P.showABC();
	Q.showXYZ();
	
	return 0;
}
