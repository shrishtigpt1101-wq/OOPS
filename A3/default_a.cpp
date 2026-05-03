/* WOOP/WAP in C++ to make generalized Sum function to Sum Two,Three or Four Integer.*/

#include<iostream>
using namespace std;

class Sum
{
	public:		
		void sum(int a=9 ,int b=2, int c =1, int d=3)
		{
			cout<<"total :"<<a+b+c+d <<endl;
		}	
};

int main()
{
	Sum s;
	s.sum();
	s.sum(2);
	s.sum(2,3);
	s.sum(2,5,0);
	s.sum(3,1,0,2);
	
	return 0;
}

