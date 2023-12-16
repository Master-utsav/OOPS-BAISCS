#include<bits/stdc++.h>

using namespace std;

class base{
    public:
        base(){
            cout << "default constructor of base class is called" << endl;
        }
        base(int b_arg){
            cout << "parameterized constructor of base class is called " << endl;
        }
};

class derived : public base{
    public:
        derived() : base(){
            cout << "default constructor of derived class is called " << endl;
        }
        // by doing that we can call base class constructor too along with the derived class paramertized constructor
        derived(int d_arg) : base(d_arg){
            cout << "parameterized constructor of derived class is called " << endl;
        }
};

int main(){
    derived d1;
    derived d2(89);
    return 0;
}