// WOP to copy all data of one file and paste it to another.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream create("source.txt");
    char ch;

    cout << "Enter data for source file (press . to stop): \n";

    // Use get() instead of cin >>
    while(true)
    {
        cin.get(ch);   // Read character including whitespace

        if(ch == '.')     // stop condition
            break;

        create.put(ch);
    }
    create.close();

    // Copy
    ifstream in("source.txt");  // Reading from source file
    ofstream out("destination.txt"); // Writing to destination file

    while(in.get(ch))   // READ FROM SOURCE
    {
        out.put(ch);    // WRITE TO DESTINATION
    }

    in.close();
    out.close();

    cout << "\nFile copied successfully!\n";

    // Display
    ifstream show("destination.txt");   

    cout << "Data in destination file:\n";
    while(show.get(ch))
    {
        cout << ch;
    }

    show.close();

    return 0;
}