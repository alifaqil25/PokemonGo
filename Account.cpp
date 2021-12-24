#include "Account.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <unistd.h>
#include <windows.h>
#include <conio.h>
#include <time.h>


using namespace std;
void Main_Menu();
Account::Account()
{
    displayChoice();
}
void delay1(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void Account::displayChoice()
{
    system("cls");
        system("color e");

    cout << "\t\t\t---------------------------------------------------------------" << endl;
    cout << "\t\t\t                        WELCOME TO                            " << endl;
    cout << "\t\t\t                             POKEMON GO                       " << endl;
    cout << "\t\t\t---------------------------------------------------------------" << endl;
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING........"<<endl;
    delay1(1200);

    system("cls");

    char choice1;

    cout<<"Do you have an account?\n[Y=yes,N=No]"<<endl;
    cin>>choice1;
    switch(choice1)
    {
        case 'Y':
        case 'y':
            {
            loginAccount(3);}break;

        case 'N' :
        case 'n' :
            {registerAccount();}break;

        default: cout<<"Wrong Input!\n"<<endl;displayChoice();
    }
}

void Account::registerAccount()
{
    ofstream accFile;
    accFile.open("UserAccount.txt",ios::binary | ios::app | ios::out);
    system("cls");
    system("color 7");
    cout<<"------------------------------------------------\n"<<endl;
    cout<<"                  SIGN UP ACCOUNT                   "<<endl;
    cout<<"\n------------------------------------------------\n\n"<<endl;
    cout<<"Create an Account"<<endl;
    cout<<"Please fill in the require information"<<endl;
    string tempPass;
    string retypePass;
    do
    {
    cout<<"USERNAME : ";
    cin>>userId;
    cout<<"Password : ";
    cin>>tempPass;
    cout<<"Re-Type Password :";
    cin>>retypePass;

    if(retypePass==tempPass)
    {
        password=retypePass;
    }
    else
    {
        cout<<"Your password does not match!"<<endl;
    }

    }while(retypePass!=tempPass);

    accFile << userId <<" "<<password<<" "<<uniQid<<"\n";
    accFile.close();


    cout<<"Successfully Registered"<<endl;
    loginAccount(3);
}

void Account::loginAccount(int x)
{
    int error=x;
    bool found=false;
    ifstream readFile;

        system("cls");
        system("color 7");
    cout<<" \n\n\t\t\t\t-----------------LOGIN ACCOUNT-----------------------\n\n   "<<endl;

    string tempUsername,tempPass;
    string tempUniqId;
    cout<<"\n\n\t\t\t\t\tENTER USERNAME : ";
    cin>>tempUsername;
    cout<<"\n\t\t\t\t\tENTER PASSWORD: ";
    cin>>tempPass;

    readFile.open("UserAccount.txt", ios::in);

        if(readFile.is_open())
        {
            while(readFile >> userId >> password)
            {

               if(tempUsername==userId&&tempPass==password )
               {
                   setUniqID(userId);
                   found=true;
                   setLoginResult(true);
               }
            }
            if(!found)
            {
                int pass;
                cout<<"NO MATCH\nYour User Id or Password May Be Wrong"<<endl;
                cout<<endl;
                if(error==3 || error==2)
                {
                cout<<"You have "<<error-1<<" try more."<<endl;
                system("pause");
                }
                pass=error-1;
                  if(pass==0)
    {
        cout<<"\n\n AUTO TERMINATES.TRY AGAIN NEXT TIME!"<<endl;
        exit(EXIT_FAILURE);
    }
                loginAccount(pass);

            }
        }
}
void Account::setUniqID(string n)
{
    userId=n;
}
string Account::getUserID()
{
    return userId;
}
void Account::setLoginResult(bool m)
{
    if(m==1)
    {
        loginResult=1;
    }
    else
        loginResult=0;
}
bool Account::getLoginResult()
{
    return loginResult;
}

