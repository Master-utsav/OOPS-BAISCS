#include<bits/stdc++.h>

using namespace std;

/*
  Write a program showing ATM functionality using OOP's
  all given functionality will show after if user enter the valid account number and valid pin
  1. checkBalance => if user enter the valid account number and valid pin
  2. cashWithdraw => if bankBalance is > 0 and user enter withdraw amount < bankBalance then procede
  3. userDetails 
  4. updateMobileNumber => if user enetr the coorect old mobile number and new mobile number length = 10;
  5. exit
*/

class atm{
  private:
      int accountNumber;
      string userName;
      int pin;
      double balance;
      string mobileNumber;

    public:
      atm(int accNum, string name, int pin, double balance , string mobileNumber){
        this->accountNumber = accNum;
        this->userName = name;
        this->balance = balance;
        this->pin = pin;
        this->mobileNumber = mobileNumber;
        }

        bool CheckaccNumPin(int accNum, int pin){
          if(accNum != this->accountNumber){
            cout << "Invalid account Number" << endl;
            return false;
          }
          else if(pin != this->pin){
            cout << "Invalid PIN" << endl;
            return false;
          }
          else{
            return true;
          }
        }

        bool isValid(int accNum , int pin){
          if(pin == this->pin && accNum == this->accountNumber){
            return true;
          }
          else{
            bool response = CheckaccNumPin(accNum, pin);
            return response;
          }
        }

        double checkBalance(){
          return this->balance;
        }

        void cashWithdraw(double amount){
          if(amount <= this->balance && amount > 0){
            cout << "collect your withdraw of rupees : " << amount << endl;
            this->balance -= amount;
            cout << "your current balance is : " << this->balance << endl;
          }
          else if(amount < 0){
            cout << "money cant be a negative integer" << endl;
          }
          else{
            cout << "your bank balance is : " << this->balance << endl;
            cout << "you cant withdraw amount of :  " << amount << endl;
          }
        }

        void userDetails(){
          cout << "Account Number : " << this->accountNumber << endl;
          cout << "Name : " << this->userName << endl;
          cout << "Bank Balance : " << this->balance << endl;
          cout << "Mobile Number is : " << this->mobileNumber << endl;
        }

        void updateMobileNumber(string mobileNum){
          if(this->mobileNumber == mobileNum && mobileNum.length() == 10){
            string newNumber;
            cout << "Enter the new Mobile Number : ";
            cin >> newNumber;
            
              if (newNumber.length() == 10){
                this->mobileNumber = newNumber;
                cout << "Your new mobile number is : " << mobileNumber << endl;
                
              }
              else{
                cout << "enter the valid mobile number : " << endl;
                cin >> newNumber;
              }
            
          }
        }
};

int main(){

  atm user1(1234567, "Utsav jasiwal", 1111, 3589.76, "9644123456");

  int accNum;
  cout << " enter the account NUmber : ";
  cin >> accNum;
  cout << endl;

  int pin;
  cout << "enter the pin : ";
  cin >> pin;
  cout << endl;

  if (user1.isValid(accNum, pin)){
    
    do{
      system("cls");
      cout << "*********Welcome to atm********" << endl;
      cout << "login successful" << endl;
      cout << "1. CHECK BALANCE" << endl;
      cout << "2. WITHDRAW CASH" << endl;
      cout << "3. USER DETAILS" << endl;
      cout << "4. UPDATE MOBILE NUMBER" << endl;
      cout << "5. EXIT" << endl;

      int choice;
      cin >> choice;
      string mobNum;

      switch (choice){
      case 1:
        cout << endl
             << "your current balance is : " << user1.checkBalance() << endl;
        system("pause");
        break;

      case 2:
        double amount;
        cout << endl
             << "Enter the Amount you want to withdraw : ";
        cin >> amount;
        cout << endl;
        user1.cashWithdraw(amount);
        system("pause");
        break;

      case 3:
        user1.userDetails();
        system("pause");
        break;

      case 4:
        cout << "enter the old mobile Number : ";
        cin >> mobNum;
        cout << endl;
        user1.updateMobileNumber(mobNum);
        system("pause");
        break;

      case 5:
        exit(0);

      default:
        cout << "enetr valid data !!!" << endl;
      }
    }while (1);
  } 

  return 0;
}