#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
        Book(string name)
        // param in __init__
        {
            cout << "Creating Object by " << name << endl;
        }

};

class Book2
{
    private:
    // only inside of the class can assess
        string author;

    public:
    // outside of tha class can also access it
        string title;
        // string author;
        int pages;
        Book2(string atitle, string aauthor, int apages)
        {
            title = atitle;
            setAuthor(aauthor);
            pages = apages;
        }
        Book2(){
            title = "";
            author = "";
            pages = 0;
        }

        void setAuthor(string a)
        {   
            if(a == "Paul" || a == "Jiji" || a == "Jay")
            {
                author = a;
            }
            else
            {
                author = "Invalid";
            }
                
        }

        string getAuthor()
        {
            return author;
        }
    
    bool over100page()
    // function inside class
    {
        if(pages > 100)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class SpecialBook: public Book2
// inherit from Book2
{
    public:
        string title = "magic";
};

int main(){

    Book book("me");
    // initialize class

    book.title = "An advanterous of goof";
    book.author = "Paul";
    book.pages = 128;

    cout << book.title << endl;
    cout << book.pages << endl;

    Book2 book_new("AJ's ok", "Jessy", 156);
    Book2 book_new_2;

    cout << book_new.title << endl;
    cout << book_new_2.pages << endl;

    cout << book_new.over100page() << endl; // True

    cout << book_new.getAuthor() << endl;
    book_new.setAuthor("Jiji");
    cout << book_new.getAuthor() << endl;

    cout << SpecialBook().title << endl; // access it's own variable
    cout << SpecialBook().pages << endl; // access Book2's variable
    
}
