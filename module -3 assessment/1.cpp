#include<iostream>
using namespace std;

int main ()
{
    string pin ;
    int cohice ;
    int balance = 20000;
    int stringBalance = 60000;

 cout << "================================================" <<"\n";
cout << " WELCOME TO ATM" << "\n";
cout <<"=================================================" <<"\n";
cout <<"1 ENTER A ATM PIN " <<"\n";
cout << "2 Help" <<"\n";
cout << "3 Exite " <<"\n";
cout << "Enter your cohice :";
cin >>cohice;

if (cohice == 1)
{
    cout <<"Enter your ATM PIN : " ;
    cin >> pin;


if (pin == "12345") 
{
    int option;
        do {
            cout << "========== MENU =============="<<"\n";
            cout << " 1 Deposit" <<"\n";
            cout << " 2 withdraw" << "\n";
            cout << " 3 check balance" <<"\n";
            cout << " 4 exite " <<"\n";
            cin >> option;
        
    
            if (option == 1)
            {
            int amount;
            cout <<" Enter amount to deposit : ";
              cin >> amount;
              balance =+ amount;
              cout <<" deposit successful ! new balance : Rs." << balance << "\n ";
            }
             else
             if (option == 2)
             {
                int amount;
                cout << "Enter amount withdrw :" <<"\n";
                cin >> amount ;
                 
                if ( balance > amount)
                {
                    cout << "wirhdrwal unsucceful! Insufficient balance ." <<"\n";
                }
                else
                {
                  balance -= amount ;
                  cout << "wirhdrwal succeful! Remaining balance: Rs. " << balance <<"\n";
                }
            }
            else
            if (option == 3)
            {
             cout << "your current balance is: Rs." << balance <<"\n";
            }
             else
             if (option == 4)
             {
                cout << "Thank for using the ATM goodbye! " <<"\n";
             }
             else 
             {
                cout << "Invalid choice.Try again."<<"\n";
             }
            } while (option =! 4);
            }
            else
            {
                cout << "Incorrect PIN! Exiting the program" <<"\n";
            }

        }
         else
         if (cohice == 2)
         {
            cout <<"=============== HELP SCREEN ===============" <<"\n";
            cout << "1. choose option 1 to enter PIN, " <<"\n";
            cout << "2. PIN is 12345 (only one attempt allowd.)" <<"\n";
            cout << "3. after correct PIN, deposit/ withdraw/ balanc options appear. " <<"\n";
         }
         else
         if (cohice == 3)
         {
           cout <<"thank you! Exiting...... " <<"\n";
         }
          
         else
         { 
             cout <<"Invalid menu option!"<<"\n";            
         }


}

