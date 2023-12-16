#include<bits/stdc++.h>

using namespace std;

// Function Overriding -> redefining the functionality of base class into derived class, then if we create object of a derived 
// class then ot os gonna call the functionality which is in the derived class this means the base class function is overriden by 
// the derived class function

// Realtionship->
// first is -> isA relation we use inheritance we inherit the property from the base class to the derived class Eg-> suzuki isA car
// secnd is -> hasA in that instead of inheriting we will create object of the respective class ans access that particular feature
//             that we want to include in our main class

// differnce b/w thw isA and hasA realtionship
/*
   1. isA relationship is based on inheritance
   2. isA relationship expose all public data of base class
   3. isA relationship is a static binding (compile time)
   4. isA realtionship is used when we want to inherit all the functionality.

   1. hasA relationship is based on objects
   2. hasA relationship use public data of derived class
   3. hasA relationship is a dynamic binding (rum-time)
   4. hasA realtionship is used when we didn't want to inherit all public functionality
*/

class base{
    public:
        void printMyName(){
            cout << "hey its me UTSAV JAISWAL" << endl;
        }
};
class derived : public base{
    public:
        void printMyName(){
            cout << "hey its me master_utsav" << endl;
            // if we want to call the base class function also then we use scope resolution operator
            base::printMyName();
        }
};

int main(){
    // base b1;
    // b1.printMyName();
    derived d1;
    d1.printMyName();
    return 0;
}