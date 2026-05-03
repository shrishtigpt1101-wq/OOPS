/*
WOOP in C++ on class Book / Item / Student with 
relavent DataMembers and following operations;
1. GetBookRecord()
2. ShowBookRecord()
3. SearchBook()
4. IssueBook()
5. ReturnBook()
6. Sort()
*/

#include <iostream>
using namespace std;

class Book {
    int bookId;
    string title;
    string author;
    int copies;

public:

    void GetBookRecord() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter No. of Copies: ";
        cin >> copies;
    }

    void ShowBookRecord() {
        cout << bookId << "\t" << title << "\t"
             << author << "\t" << copies << endl;
    }

    int SearchBook(int id) {
        if (bookId == id)
            return 1;
        else
            return 0;
    }

    void IssueBook() {
        if (copies > 0) {
            copies--;
            cout << "Book Issued Successfully\n";
        } else {
            cout << "Book Not Available\n";
        }
    }

    void ReturnBook() {
        copies++;
        cout << "Book Returned Successfully\n";
    }

    int getId() {
        return bookId;
    }

    void swap(Book &b) {
        Book temp = *this;
        *this = b;
        b = temp;
    }
};

int main() {
    Book b[5];
    int n = 3, i, j, id;

    for (i = 0; i < n; i++) {
        b[i].GetBookRecord();
    }

    cout << "\nID\tTITLE\tAUTHOR\tCOPIES\n";
    for (i = 0; i < n; i++) {
        b[i].ShowBookRecord();
    }

    cout << "\nEnter Book ID to Search & Issue: ";
    cin >> id;
    for (i = 0; i < n; i++) {
        if (b[i].SearchBook(id)) {
            b[i].IssueBook();
        }
    }

    cout << "\nEnter Book ID to Return: ";
    cin >> id;
    for (i = 0; i < n; i++) {
        if (b[i].SearchBook(id)) {
            b[i].ReturnBook();
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (b[i].getId() > b[j].getId()) {
                b[i].swap(b[j]);
            }
        }
    }

    cout << "\nAfter Sorting:\n";
    cout << "ID\tTITLE\tAUTHOR\tCOPIES\n";
    for (i = 0; i < n; i++) {
        b[i].ShowBookRecord();
    }

    return 0;
}
