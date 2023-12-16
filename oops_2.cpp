#include<bits/stdc++.h>

using namespace std;

// write a program take phone details as input(inc. -> phone number , ram , battery , processor) and store them in object and use constructor

class phoneDetails{
    private:
        string phoneNumber;
        int ram;
        int battery;
        string processor;

    public:
        phoneDetails(string phoneNumber = "NULL" , int ram = 0 , int battery = 0 , string processor = "NULL"){
            this->phoneNumber = phoneNumber;
            this->processor = processor;
            this->ram = ram;
            this->battery = battery;
        }
        phoneDetails(phoneDetails &obj){
            this->phoneNumber = obj.phoneNumber;
            this->processor = obj.processor;
            this->ram = obj.ram;
            this->battery = obj.battery;
        }

        void getPhoneData();
};

void phoneDetails :: getPhoneData(){
    cout << "Phone Number is : " << phoneNumber << endl;
    cout << "processor of the mobile is : " << processor << endl;
    cout << "RAM is : " << ram << " GB " << endl;
    cout << "battery is : " << battery << " mAh " << endl;
}

int main(){
    phoneDetails xyz;

    phoneDetails honor("9644637282" , 8 , 7000 , "snapdragon712");

    phoneDetails honor9(honor);

    xyz.getPhoneData();
    honor.getPhoneData();
    honor9.getPhoneData();

    return 0;
}