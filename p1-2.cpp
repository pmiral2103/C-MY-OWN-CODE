#include <iostream>
using namespace std;

class Book
{
public:
    int id;
    string title;
    string author;
    int copies;

    void input(int i, string t, string a, int c)
    {
        id = i;
        title = t;
        author = a;
        copies = c;
    }

    void display()
    {
        cout << "ID: " << id
             << " | Title: " << title
             << " | Author: " << author
             << " | Copies: " << copies << endl;
    }
};

class Library
{
private:
    Book books[100];
    int count;

public:
    Library()
    {
        count = 0;
    }


    void addBook(int id, string title, string author, int copies)
    {
        books[count].input(id, title, author, copies);
        count++;
        cout << "Book added successfully!\n";
    }


    void issueBook(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (books[i].id == id)
            {
                if (books[i].copies > 0)
                {
                    books[i].copies--;
                    cout << "Book issued successfully!\n";
                }
                else
                {
                    cout << "No copies available!\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }


    void returnBook(int id)
    {
        for (int i = 0; i < count; i++)
        {
            if (books[i].id == id)
            {
                books[i].copies++;
                cout << "Book returned successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }


    void displayBooks()
    {
        cout << "\n--- Library Books ---\n";
        for (int i = 0; i < count; i++)
        {
            books[i].display();
        }
    }


    void totalBooks()
    {
        int total = 0;
        for (int i = 0; i < count; i++)
        {
            total += books[i].copies;
        }
        cout << "Total available copies: " << total << endl;
    }
};

int main()
{
    Library lib;

    lib.addBook(1, "C++", "MIRAL", 3);
    lib.addBook(2, "C", "MaITRY", 2);
    lib.addBook(3, "PYTHON", "KHUSHI", 4);

    lib.displayBooks();

    lib.issueBook(2);
    lib.returnBook(2);

    lib.totalBooks();

    return 0;
}
