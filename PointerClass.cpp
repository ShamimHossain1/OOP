#include<iostream>


// Pointer use in object oriented
// Pointer to object and arrow operators
// Array of objects

using namespace std;

class Complex {
    int a, b;
    public:
    void setData(int c, int d){
        a = c;
        b = d;
    }

void displayData(){
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
}

};

class Shop{
    int id;
    float price;
    public:
    void setData(int i, float p){
        id = i;
        price = p;
        }
        void displayData(){
            cout<<"ID = "<<id<<endl;
            cout<<"Price = "<<price<<endl;
            }
};

int main(){

    // Complex c1;
    // // Complex *ptr = &c1;
    //  Complex *ptr = new Complex;

    // // (*ptr).setData(10, 30);
    // // (*ptr).displayData();
    // ptr->setData(10, 30);
    // ptr->displayData();

    // Array of object

    // Complex *ptr = new Complex[3];
    //  ptr->setData(10, 30);
    //  ptr->displayData();

    int size = 3, id;
    float price;

    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price for item :"<<i+1<<endl;
        cout<<"ID: ";
        cin>>id;
        cout<<"Price :";
        cin>>price;
        ptr->setData(id, price);
        ptr++;
    }

    cout<<endl;
        cout<<"<---- Listed Item Lists ---->"<<endl;
    
    for (int i = 0; i < size; i++)
    {   
        
        cout<<"--Item number: "<<i+1<<endl;
        ptrTemp->displayData();
        ptrTemp++;
    }

    
    


    return 0;
}