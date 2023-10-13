#include<iostream>

using namespace std;

void showMenu()
{
    cout <<"*************MENU*************" <<endl;
    cout <<"1. Check balance" << endl;
    cout <<"2. Deposit" << endl;
    cout <<"3. Withdraw" << endl;
    cout <<"4. Exit" << endl;

    cout <<"*******************************" <<endl;


}

int main()
{
    int option;
    double balance =0.00;
    do{
            showMenu();

    cout<< "Option ";
    cin>> option;
    system("cls");

    switch(option)
    {

    case 1: cout << "Balance is"  <<" $"  << balance << endl;
     break;

    case 2: cout << "Deposit amount:";
        double deposiAmount;
        cin >> deposiAmount;
        balance += deposiAmount;
        break;

    case 3: cout<< "Withdraw amount:" <<" $";
        double withdrawAmount;
        cin >> withdrawAmount;
        if(balance < withdrawAmount)
            {
                cout<< "Insufiecient Funds" <<endl;

            }else{

                 balance -= withdrawAmount;

            }
             break;

    }

} while (option!=4);

system("pause>0");
}
