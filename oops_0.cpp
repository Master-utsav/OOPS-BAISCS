#include<bits/stdc++.h>

using namespace std;
// why OOPS?
// in procedural oriented programming -> list of instruction in a single block -> suitable for small programmes
// in Moduular programming -> Divided into function and each function has a clear purpose -> seprate data and function {difficult to modify and conceptualise}


/* classes is the user defined data-type which holds its own data members and member function
  and it is also called as the blueprint  and object is the instance(event) of this blueprint */

class house{
    // by default access specifier is private
    int breadth, length; // memeber variables which are actually storing the data will get seperate memory space , each time we create new object

public: // acess sepecifier is public 
    void setData(int x, int y){ // while member function shared by all the object (no sepearte memory space is required for different object)
        this->length = x;
        this->breadth = y;
        }

        void area(){
            cout << length * breadth << endl;
        }
};

// ACCESS SPECIFIER -> during inheritance lets say class1 inherit class2 so if class1 data member is PRIVATE then class2 cant acess them as well
// main function while in PROTECTED if class1 data member is protected then class2 can access them but they cant be acess outside the class
// and last PUBLIC we all know about that...


int main(){
    // objects is like a thing that follows the set of instruction(class). it has characteristics(attributes) ans can do things(methods). 
    house h1;
    h1.setData(20, 40);

    h1.area();
    return 0;
}
