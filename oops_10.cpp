#include<bits/stdc++.h>

using namespace std;

// Static Member => static member would be allocated memory only at once and that memory is shared to every object. static data 
// member belongs to class and common to all objects they can be called with the className as well with objects

// static member function => is the function which can only acess the static member nad they can be called with the className as 
// well with objects

class number{
    private:
        int a;
        int b;
    public:
        number(){
            int a = 5;
            int b = 7;
            stat++;
        }
        static int stat; // static member
        static int getStat(){ // static member function which can acess only static members
            stat++;
            return stat;
        }
};
int number ::stat = 0;

int main(){

    number num1;
    number num2;

    cout << num1.stat << endl; // output will be 2 beacuse we create 2 objects when we create first object then constructor increments the value of stat by 1 and on creating another object again consturctor do the same and now value of stat = 2;
    cout << num2.stat << endl;
    cout << number::stat << endl;

    // now if we call getStat then it also incremnet the value on each call;
    cout << num1.getStat() << endl;
    cout << num2.getStat() << endl;
    cout << number::getStat() << endl;
    return 0;
}