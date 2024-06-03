#include<iostream>

using namespace std;

 class binary {
        string s;
        public:
         void read(void);
         void check(void);

    };

    void binary :: read(void){

        cout<<"Enter a Binary number:";
        cin>>s;
        
    }
    
    void binary :: check(void){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout<<"Invalid Binary Number";
                exit(0);
            }
           
               
           
        }
         cout<<"Valid Binary Number";
        
    }

int main(){
     
     binary a;
     a.read();
     a.check();
   

    

    return 0;
}