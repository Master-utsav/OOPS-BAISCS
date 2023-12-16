#include<bits/stdc++.h>

using namespace std;

// Abstract class => is used when we never want to intantiate object of base class ; abstract class exists only to act as a parent of derived class

// pure virtual function => periviously we see what is virtual function so pure key word here refer that the function value is = 0 that is NULL Eg-> virtual void show() = 0;
// and the class which consite only of pure virtual function and the object of that class can't be intantiated then the class is called as abstract

class person{ // person class is abstract class
    public: 
        virtual void indentity() = 0;
};
class girl : public person{
    public:
        void indentity(){
            cout << "i am a girl" << endl;
        }
};
class boy : public person{
    public:
        void indentity(){
            cout << "i am a boy" << endl;
        }
};

int main(){
    person *p1 = NULL;
    girl g1;
    boy b1;

    p1 = &g1;
    p1->indentity();

    p1 = &b1;
    p1->indentity();

    p1 = new girl();
    p1->indentity();

    p1 = new boy();
    p1->indentity();


    return 0;
}