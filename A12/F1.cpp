// WOP for storing char / int / double data in file and print after reading from file.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char ch;
	int num;
	double d;
	
	cout<<"enter a character:";
	cin>>ch;
	
	cout<<"enter an integer:";
	cin>>num;
	
	cout<<"enter a double:";
	cin>>d;
	
	ofstream out("data.txt");	// create and open file for writing
	out<<ch<<" "<<num<<" "<<d; // write data to file
	
	out.close();
	
	ifstream in("data.txt");	// create and open file for reading	
	char ch2;
	int num2;
	double d2;
	
	in>>ch2>>num2>>d2;	// read data from file
	in.close();
	
	cout<<"data read from file:"<<endl;
	cout<<"character: "<<ch2 <<endl;
	cout<<"integer: "<<num2<<endl;
	cout<<"double: "<<d2<<endl;
	
	return 0;
 } 