// Modify Program 3 to perform random updation in file. append, ate,read, write function,seekg, seekp, tellg, tellp.

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    fstream file;
    char data[100], newData[50];
    int pos;

    // Open file
    file.open("data3.txt", ios::in | ios::out | ios::binary | ios::trunc);

    if (!file)
    {
        cout << "Error opening file!" << endl;
        return 0;
    }

    // -------- USER INPUT (WRITE) --------
    cout << "Enter data to write in file: ";
    cin.getline(data, 100);

    file.write(data, strlen(data));
    cout << "Data written successfully!" << endl;

    // -------- SHOW ORIGINAL DATA --------
    file.seekg(0, ios::beg);
    char readData[100] = {0};
    file.read(readData, strlen(data));

    cout << "Original Data: " << readData << endl;

    // -------- USER INPUT FOR RANDOM UPDATE --------
    cout << "Enter position to update: ";
    cin >> pos;
    cin.ignore(); // clear buffer

    cout << "Enter new data: ";
    cin.getline(newData, 50);

    // -------- RANDOM UPDATE --------
    file.seekp(pos, ios::beg);
    file.write(newData, strlen(newData));

    cout << "Data updated successfully!" << endl;

    // -------- SHOW UPDATED DATA --------
    file.seekg(0, ios::beg);
    char updatedData[100] = {0};
    file.read(updatedData, strlen(data));

    cout << "Updated Data: " << updatedData << endl;

    // ✅ FIX: Clear EOF state
    file.clear();

    // -------- POINTER POSITIONS --------
    cout << "Read position (tellg): " << file.tellg() << endl;
    cout << "Write position (tellp): " << file.tellp() << endl;

    file.close();
    return 0;
}