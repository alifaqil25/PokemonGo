#include "CreateProfile.h"
#include "Account.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <windows.h>
#include <ctime>


using namespace std;

userProfile::userProfile(string x)
{
    uniqID=x;
    displayMenu();
}

void userProfile::displayMenu()
{
    int choice;
    system("cls");
    system("color 02");

    cout<<"1 - CREATE NEW PROFILE\n2 - VIEW YOUR PROFILE\n3 - to Main Menu"<<endl;
    cin>>choice;
   while(!cin){
       cout<<'\a';
    cout<<"Wrong Input Value.Please Input Number"<<endl;
     cin.clear();
    cin.ignore(256,'\n');
    cin>>choice;
    }
    switch(choice)
    {
        case 1 : {recProfile();}
        break;

        case 2 :{readProfile();}break;

        case 3 :{break;}

        default: cout<<"\a";
    }
}
void userProfile::setProfile()
{

    system("cls");
    cout<<"---------------------------------------------------\n"<<endl;
    cout<<"                   POGO PROFILES                 "<<endl;
    cout<<"\n---------------------------------------------------"<<endl;
    cout<<"NAME : ";
    cin.ignore();
    getline(cin,name);
    cout<<"GENDER \n[M/W]:";
    cin>>gender;

    cout<<"AGE :";
    cin>>age;
    while(!cin){
            Beep(500,200);
    cout<<"Wrong Input Value.Please Input Number"<<endl;
     cin.clear();
    cin.ignore(256,'\n');
    cin>>age;
    }


    cout<<"GMAIL :";
    cin>>gmail;

    displayMenu();
}
void userProfile::showProfile()
{

    cout<<"---------------------------------------------------\n"<<endl;
    cout<<"                     POGO PROFILES                 "<<endl;
    cout<<"\n---------------------------------------------------"<<endl;

    cout<<"NAME : "<<name<<setw(10)<<"AGE : "<<age<<endl;
    cout<<"GENDER :"<<gender<<endl;
    cout<<"GMAIL :"<<gmail<<endl<<"\n\n";
    system("pause");
    displayMenu();
}
void userProfile::recProfile()
{
    ///////OPEN PROFILE DOC///

    ofstream profile;
    profile.open("Profile.txt", ios::app | ios::in | ios::out);
    if(!profile)
    {
        cout<<'\a';
        cout<<"There is an error in opening the file."<<endl;
    }


    setProfile();
    profile<<"#"<<uniqID<<endl<<name<<" "<<age<<" "<<gender<<" "<<gmail<<endl;
    profile.close();

    displayMenu();
}
void userProfile::readProfile()
{
    string test,line,ID;
    system("cls");
    ID="#"+uniqID;
    //cout<<ID<<"TEST"<<endl;
    ifstream profile;
    profile.open("Profile.txt", ios::app | ios::in);
    if(!profile)
    {
        cout<<"\a";
        cout<<"There is an error in opening the file."<<endl;
    }

    while(getline(profile,line))
    {
        std::string::size_type pos = line.find(ID);
        if(pos!= std::string::npos)
        {
            while(profile >>name >>age >>gender >>gmail && getline(profile,test,'#') )
                {
                    showProfile();
                }
        }


    }
    profile.close();


}




