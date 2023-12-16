#include<bits/stdc++.h>

using namespace std;

// Inheritance -> inheritance is the mechaanism in which one class inherit the property of another class
// why Inheritance -> reduce duplicate code, code reuse, better organization of code

// Example of Inheritance
class rectangle{
    public:
        int length;
        int breadth;
        // 1st. default constructor of base class is called first then derived class default constructor called....
        // 2nd. paramertirzed constructor of base class is not called when paramaterized constructor is present in derived class...
        // so how we can call parematerized constructor of both the classes by the object of derived class let see in oops_5.cpp
        rectangle(int length = 0 , int breadth = 0){
            this->length = length;
            this->breadth = breadth;
        }

        void areaOfRectangle(){
            cout << "area of rectangle is : " << length * breadth << endl;
        }
};
// ways of inheritance
/*
   1. public -> in this public is inherited as public and protected is inherited as protected
   2. protected -> in this public is inherited as protected and protected is inherited as protected
*/
class cuboid : public rectangle{
    public:
        int height;

        // if we dont specify a constructor, then derived class is used appropriate constructor from baseClass (applicable only to default constructor )
        cuboid(int length = 0, int breadth = 0, int height = 0){
            rectangle::length = length;
            rectangle::breadth = breadth;
            this->height = height;
        }

        void areaOfCuboid(){
            cout << "area of Cuboid is : " << 2*((length*breadth) + (breadth*height) + (height*length))  << endl;
        }
        void volumeOfCuboid(){
            cout << "Volume of Cuboid is : " << length * breadth * height << endl;
        }
};

int main(){
    // Derived class object can access both the derived class and base class
    rectangle r1(5, 8);
    cuboid c1(2, 3, 4);

    r1.areaOfRectangle();
    c1.areaOfRectangle(); // same as r1.areaOfRectangle becuase c1 object have length->2 and breadth->3 thats why c1.area = 6;
    c1.areaOfCuboid();
    c1.volumeOfCuboid();

    return 0;
}