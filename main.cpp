/*ATM Pin security*/
#include <iostream>
using namespace std;
int main(){
    int Correct_Pin = 1020, Enter_Pin, Attempt = 3,balance,withdraw;
    cout<<"========================="<<endl;
    cout<<"  Welcome To Fast ATM "<<endl;
    cout<<"=========================\n"<<endl;

    //Will take Pin 3 time Until its not correct in 3 attempts
    do{
        cout<<"Enter 4 digit Pin: ";
        cin>>Enter_Pin;
        if(Enter_Pin == Correct_Pin){
            cout<<"\t======="<<endl;
            cout<<"\tWelcome"<<endl;
            cout<<"\t======="<<endl;
        }
        else{

            Attempt--; //same as (Attempt -= 1 or Atempt = Attempt - 1)
            if(Attempt > 0){
                cout<<"Remaining Attempts: "<<Attempt<<endl;
            }
            else{
                cout<<"Card Blocked: Reached maximum attempts"<<endl;
                return 0; // program ends if user dial wrong pin 3 times
            }
            }
        }
    while(Enter_Pin != Correct_Pin && Attempt > 0);

    //Will ask user about balance and withdraw
    cout<<"Enter total balance: ";
    cin>>balance;
    cout<<"Enter withdraw ammount: ";
    cin>>withdraw;
    
    //Error: if any error in transiction
    if(withdraw>balance || withdraw<=0){
        cout<<"Please enter valid withdraw!"<<endl;
    }
    else{
        cout<<"Please take your cash, thanks!"<<endl;
        cout<<"Remaing balance is: "<<balance - withdraw<<endl;
    }

 
    return 0;
}