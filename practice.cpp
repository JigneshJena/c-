#include<iostream>
using namespace std;
class bank{
    private:
    int acno;
    char name[30];
    char type[30];
    double balance;

    public:
    void openAccount(){
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Name: ";
        cin >> name;
        cout<<"Enter Account type:";
        cin>>type;
        cout << "Enter Balance: "<<endl;
        cin >> balance;

    }

    void showAccount(){
        cout << "Account Number: " << acno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout<<"Accout Type :"<<type<<endl;

    }

    void deposite(){
        double amt;
        cout<<"Enter Amount to Deposite.";
        cin>>amt;
        balance +=amt;
    }
    
    void withdrawl(){
        double amt;
        cout<<"Enter amount to Withdrawl.";
        cin>>amt;
        if(amt>balance){
            cout<<"Insufficient balance.";
        }
        else {
            balance -= amt;
            cout<<"The Remaining Balance ."<<balance<<endl;
        }

    }

    int search(int x){
        if(x==acno){
            showAccount();
            return 1;
        }
        return 0;
    }

};
int main(){
    bank b[5];
    for (int i = 0; i <5; i++)
    {
        b[i].openAccount();
    }
    
    int ch,a,found=0;
    do{ 
        cout << "\n1: Display All\n2: By Account No\n3: Deposit\n4: Withdraw\n5: Exit" << endl;
        cout << "Please input your choice: ";
        cin >> ch;
        if(ch==5){
            break;
        }
        switch(ch){
            case 1:
                for (int i = 0; i < 5; i++)
                {
                    b[i].showAccount();
                    cout<<"\n";
                }
                break;

            case 2:
            cout<<"Enter Account number for detail.";
            cin>>a;
            for (int i = 0; i < 5; i++)
            {
                found=b[i].search(a);
                cout<<"\n";
                if(found){
                    break;
                }
                
            }if(!found)cout<<"Record not found!.";
           break;

            case 3:
            cout<<"Enter Account number for Deposite.";
            cin>>a;
            for (int i = 0; i < 5; i++)
            {
                found=b[i].search(a);
                cout<<"\n";
                if(found){
                    b[i].deposite();
                }
                cout<<"\n";
            }
            if(!found){
                    cout<<"Record not found!.";
                }
            break;
            case 4:
            cout<<"Enter Account number for Withdrawl.";
            cin>>a;
            for (int i = 0; i < 5; i++)
            {
                found=b[i].search(a);
                if(found){
                    b[i].withdrawl();
                }if(!found){
                    cout<<"Record not Found!.";
                }
            }
                 
            break;

        }
    }while(ch>=1&& ch<=4 );
    return 0;
}