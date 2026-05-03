#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

int main()
{
	char ch;
	// write
	ofstream out;
	out.open("text1.txt"); // path didnot mention it save in current directory
	do
	{
		// ch=getch();//reading not show in output (eg. in password not show to user)
		ch=getchar();
		out.put(ch); // or out<<ch;
	}while(ch!='.'); // user choic reading using put function
	out.close(); // if you not close the file then we didnot read file until file is close
	
	char g;
	ifstream in;
	in.open("text.txt");
	do{
		g=getchar();
		in.put(g);
	}
	while(g!='.');
	in.close();
	return 0;
	return 0;
}