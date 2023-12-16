#include<bits/stdc++.h>

using namespace std;

// virtual destructor => we call virtual destructor when we want to delete whole object that the base part and the derived part as well... so we set the base classs destructor as virtual so that  the derived class desturctor is called

class base{
    public:
        base(){
            cout << "base constructor is called" << endl;
        }
        virtual ~base(){
            cout << "base destructor is called" << endl;
        }
};

class derived : public base{
    public:
        derived(){
            cout << "derived constructor is called" << endl;
        }
        ~derived(){
            cout << "derived desturctor is called" << endl;
        }
};

int main(){

    // derived ptr0(); // here we statically create object so the destructor will aotu call and we dont have to use virtual keyword 

    base *ptr1 = NULL;
    ptr1 = new derived(); // we make object dyanmically so we used delete keyword for calling the destructor

    delete ptr1;
    return 0;
}