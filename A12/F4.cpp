// WOP to test file state functions over any suitable file. (fail, good , bad , eof) 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // -------- Step 1: Create and write file --------
    ofstream create("data2.txt");
    create << "Hello File Handling!";
    create.close();

    // -------- Step 2: Open file for reading --------
    ifstream in("data2.txt");
    char ch;

    // Check fail()
    if(in.fail())
    {
        cout << "fail(): File could not be opened\n";
        return 0;
    }

    cout << "Reading file...\n";

    // -------- Step 3: Read and test states --------
    while(true)
    {
        in.get(ch);

        if(in.eof())
        {
            cout << "\neof(): End of file reached\n";
            break;
        }

        if(in.bad())
        {
            cout << "\nbad(): Serious error occurred\n";
            break;
        }

        if(in.fail())
        {
            cout << "\nfail(): Error in reading\n";
            break;
        }

        if(in.good())
        {
            cout << ch;
        }
    }

    in.close();

    return 0;
}