#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float ratings;

public:
    CWH(string s, float r)
    {
        title = s;
        ratings = r;
    }
    virtual void display() {}
};

class CWHBook : public CWH
{
    int BookPage;

public:
    CWHBook(string s, float r, int p) : CWH(s, r)
    {
        BookPage = p;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Ratings: " << ratings << endl;
        cout << "Book Page: " << BookPage << endl;
    }
};
class CWHtext : public CWH
{
    int words;

public:
    CWHtext(string s, float r, int p) : CWH(s, r)
    {
        words = p;
    }
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Ratings: " << ratings << endl;
        cout << "Book has : " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating;
    int page, words;

    title = "Atomic Habits";
    rating = 4.5;
    page = 300;
    CWHBook Habits(title, rating, page);
    // Habits.display();

    title = "Rich dad, Poor dad";
    rating = 4.6;
    words = 25600;
    CWHtext Rich(title, rating, words);
    // Rich.display();

    CWH *Book[2];
    Book[0] = &Habits;
    Book[1] = &Rich;

    Book[0]->display();
    Book[1]->display();

    return 0;
}