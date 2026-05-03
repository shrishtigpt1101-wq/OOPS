// WOP for storing char(s) upto users choice in file and then retrive and print it.(get, put, eof) 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("data1.txt");
    char ch;

    cout << "Enter characters (press . to stop): ";
    cin >> ch;   // ✅ initialize first

    // -------- Writing using put() --------
    while(ch != '.')
    {
        out.put(ch);
        cin >> ch;
    }
    out.close();

    // -------- Reading using get() and eof() --------
    ifstream in("data1.txt");

    if(in.fail())
    {
        cout << "File not found!";
        return 0;
    }

    cout << "\nData read from file:\n";

    while(!in.eof())
    {
        in.get(ch);
        if(!in.eof())   // EOF check after reading to avoid printing last character twice
            cout << ch;
    }

    in.close();

    return 0;
}