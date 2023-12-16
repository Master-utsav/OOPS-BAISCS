#include<bits/stdc++.h>

using namespace std;

// operator overloading -> when we make operators(*, + , - , / )work for user-defined types like objects and structures. this is known as operator overloading..

class className{
    private:
        int weight;
    public:
        className(int weight = 0){
            this->weight = weight;
        }
        // operator + overloading
        className operator+(className &w2){ // operator overloading
            className temp;
            temp.weight = weight + w2.weight;
            return temp;
        }
        // operator ++ (pre-increment) overloading
        void operator++(){
            ++weight;
        }
        // operator overloading ++ (post-increment) overloading {how compiler diifer so, we pass int with no arguments}
        void operator++(int){
            weight++;
        }
        void printWeight(){
            cout << "total weight of objects(person1 + person2) is : " << weight << endl;
        }
        void printData(){
            cout << "Now weight is : " << weight << endl;
        }
};

int main(){
    className person1(30);
    className person2(50);
    className total;
    total = person1 + person2;
    total.printWeight();

    className person3(20);
    ++person3;
    person3++;
    person3.printData();

    return 0;
}