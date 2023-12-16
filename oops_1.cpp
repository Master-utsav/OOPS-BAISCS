#include<bits/stdc++.h>

using namespace std;

// pillar of oops are : CLASS , OBJECTS , ABSTRACTION , INHERITANCE , POLYMORPHISM , ENCAPSULATION
// class and objects we already learn

// ENCAPSULATION -> wrapping up variables and methods in class as well data hiding is also possible bcoz of encapsulation 

// POLYMORPHISM -> means having many forms.
// compile time polymorpishm -> 1) function overloading -> methods(or function) may behave differently as the input parameter.
//                           -> 2) operator overloading -> we can overload the operator also that means we can define that the  [*]this operator behave like [+].... amazing right.....?

// runtime polymorphism -> function overridding -> we can overide the function at run time by using virtual keyword(we will understand that later)  -> virtual function

// Inheritance -> means property of the child calss to inherit the property of the parent class. in CPP inheritance is of 5 types -> (we will discuss that later)

// ABSTRACTION -> hiding the complicated thing from the user just like my header file

// CONSTRUCTORS: -> rules -> 1) same as class name and ho no return type
// why we use constructor -> programmer may forgot to initialize data member in object after creating it.
//                        -> when there is many object then it would be tedious job to setData for each and every object
//                        -> Initialize and allocate memory to the Data Member


// there are three types of constructor 
class constructor{
    string name;
    int age;
    float height;

    public:
        // default constructor( or non-paramaterized constructor ) when we dont pass any value at the time of initializing the object then defualt constructor called.... [ we have to create our default constructor and assign some value otherwise the garbage value is set to our data memebers (so we have to create constructor)]
        // constructor(){
        //     this->name = "NULL";
        //     this->age = 0;
        //     this->height = 0.0f;
        // }

        void getData(){
            cout << "name is : " << name << endl;
            cout << "age is : " << age << endl;
            cout << "height is : " << height <<" m "<< endl;
        }

        // Parametrized constructor -> are used when user wantto set some values of the data member at the time of creating objects
        // constructor(string name, int age, float height){
        //     this->name = name;
        //     this->height = height;
        //     this->age = age;
        // }

        // copy constructor -> are used to create a new object from existing object
        constructor(constructor &obj){ // here obj as values of cons2 object
            this->name = obj.name;
            this->height = obj.height;
            this->age = obj.age;
        }

        // overloading constructor -> that is we combine the default and parameterized constructor[ if we comment out the above default and parameterized constructor the output remain same ]
        constructor(string name = "NULL", int age = 0, float height = 0.0f){
            this->name = name;
            this->height = height;
            this->age = age;
        }
};

int main(){

    constructor cons, cons1("utsav" , 20 , 1.72);

    cons.getData();
    cons1.getData();

    constructor cons2("katherine", 27, 1.66);
    constructor cons3(cons2);
    cons2.getData();

    return 0;
}