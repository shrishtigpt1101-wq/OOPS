// WAP using file handling writing data into file upto users choice and read it in reverse order.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("data4.txt");
    char ch;

    cout << "Enter characters (press . to stop): ";
    cin >> ch;

    // Writing using put()
    while(ch != '.')
    {
        out.put(ch);
        cin >> ch;
    }
    out.close();

    // Reading in reverse
    ifstream in("data4.txt");

    if(in.fail())
    {
        cout << "Unable to open file" << endl;
        return 0;
    }

    cout << "Data read in reverse order from file:\n";

    // Move pointer to end
    in.seekg(0, ios::end);

    int pos = in.tellg();  // get file size

    // Read backwards
    for(int i = pos - 1; i >= 0; i--)
    {
        in.seekg(i);
        in.get(ch);
        cout << ch;
    }

    in.close();

    return 0;
}