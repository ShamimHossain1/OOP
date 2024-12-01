// virtual function example
// Abstract Base Class
// Pure virtual function
#include<iostream>
#include<cstring>

using namespace std;


class Sauda{
    protected:
        string title;
        float rating;
    public:
        Sauda(string t, float r){
            title= t;
            rating = r;
        }
        virtual void display() = 0 ; // Pure virtual function // Do nothing function

};

class Movie : public Sauda{
    int videoLength;
    public:
        Movie(string t, float r, int v) : Sauda(t, r){
            videoLength = v;
        }
        void display(){
            cout << "------Movie Class-----" << endl;
            cout << "Title: " << title << endl;
            cout << "Rating: " << rating << endl;
            cout << "Video Length: " << videoLength <<"hr"<< endl;
        }
};

class Characters : public Sauda{
    int cast;
        public:
            Characters (string t, float r, int w) : Sauda(t, r){
                cast = w;
            }
            void display(){
                cout << "-----Characters  Class-------" << endl;
                cout << "Title: " << title << endl;
                cout << "Rating: " << rating << endl;
                cout << "No of cast: " << cast << endl;
            }
};

int main(){

    string title;
    float rating, videoLength;
    int cast;

// for movie

    title = "Batman";
    rating = 4.5;
    videoLength = 2;
    Movie DC(title, rating,videoLength);
    // DC.display();

// for Characters

    title = "avengers";
    rating = 4;
    cast = 30;
    Characters Marvel(title, rating,cast);
    // Marvel.display();

    Sauda *list[2];

    list[0] = &Marvel;
    list[1] = &DC;

    list[0]->display();
    list[1]->display();

     
    

    return 0;
}