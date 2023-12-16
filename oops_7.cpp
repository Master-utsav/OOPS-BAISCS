#include<bits/stdc++.h>

using namespace std;

// Polymorphism
// base class pointer and derived class object => base *b1 = new derived(); this pointer b1 can only acess the feauters of base class

// virtual function => virtual means existing in apperance but not in reality and virtual function means function existing in class but can't be used ; 
// virtual function => program that appear to be calling a function of one class may in reality calling a function of different class

// why virtual function -> because of dynamic binding / late binding
// late binding or dynamic binding => compiler defer the decission, until the program is running ;
// and at runtime when it come to know which class is pointed by pointerName(PTR) then appropriate function would be called 

class base{
    public:
        // we want to call the show function for particular derived classes so we make base base class show function as virtual
        virtual void show(){
            cout << "base class" << endl;
        }
};
class drv1 : public base{
    public:
        void show(){
            cout << "drv1 class" << endl;
        }
};

class drv2 : public base{
    public:
        void show(){
            cout << "drv2 class" << endl;
        }
};


int main(){
    base *ptr = NULL;

    ptr = new drv1();
    ptr->show();

    ptr = new drv2();
    ptr->show();
    return 0;
}