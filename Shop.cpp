#include "Shop.h"
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Account.h"

using namespace std;

Shop::Shop(Player &gameplay)
{
    display_Shop_Menu(gameplay);
}

void Shop::display_Shop_Menu(Player &gameplay)
{
    system("cls");
    system("color 7c");
    char choice;
    //do{
    cout<<"----------------------------------------------\n"<<endl;
    cout<<"              Welcome to PokeShop              "<<endl;
    cout<<"\n----------------------------------------------\n"<<endl;
    cout<<"\n\t1.Buy Pokeball\n\t2.Convert Candies To Coins\n\t3.Convert Coins To Candies\n\t4.to Main Menu"<<endl;

    cout<<"\n\t\t\tYour Choice : ";
    choice=getche();

    switch(choice)
    {
        case '1' : {buyPokeball(gameplay);}
        break;

        case '2' :{convertToCoins(gameplay);}break;

        case '3' :{convertToCandies(gameplay);}break;

        case '4' :{break;}

        default:  cout<<"\nWrong Input!!";cout<<"\a";display_Shop_Menu(gameplay);
    }
    //}while(choice!='4');
}
void Shop::displayPokeBall()
{
    system("cls");



    cout<<"\n\n\t\t\tBALL"<<setw(40)<<"Price"<<endl;
    cout<<"\n\t\t\t1.Great Ball"<<setw(35)<<"50 Coins"<<endl;
    cout<<"\t\t\t2.Ultra Ball"<<setw(35)<<"30 Coins"<<endl;
    cout<<"\t\t\t3.Lure Ball"<<setw(38)<<"150 Candies"<<endl;
    cout<<"\t\t\t4.Moon Ball"<<setw(38)<<"100 Candies"<<endl;
    cout<<"\t\t\t5.Nest Ball"<<setw(38)<<"100 Candies"<<endl;
    cout<<"\t\t\t6.Net Ball"<<setw(39)<<"100 Candies"<<endl;


}
void Shop::buyPokeball(Player &a1)
{
    displayPokeBall();
    int temp_currentCoins;
    int temp_currentCandies;
    bool convert=0;
    char choice;

    current_Account(a1);

    cout<<"\n\nY\t\t\tYour Choice : ";
    cin>>choice;

    switch(choice)
    {
        case '1' :{ if(CheckAccount(1,50,a1))
                     {
                         temp_currentCoins=a1.getCoins()-50;
                         a1.setCoins(temp_currentCoins);
                         a1.insertPokeball("Great Ball");
                         convert=1;
                     }
                      else
                        cout<<"NO ENOUGH MONEY"<<endl;
        }break;

        case '2' :{ if(CheckAccount(1,30,a1))
                     {
                         temp_currentCoins=a1.getCoins()-30;
                         a1.setCoins(temp_currentCoins);
                         a1.insertPokeball("Ultra Ball");
                         convert=1;
                     }
                      else
                        cout<<"NO ENOUGH MONEY"<<endl;
        }break;

        case '3' :{ if(CheckAccount(2,100,a1))
                     {
                         temp_currentCandies=a1.getCandies()-100;
                         a1.setCandies(temp_currentCandies);
                         a1.insertPokeball("Lure Ball");
                         convert=1;
                     }
                      else
                        cout<<"NO ENOUGH MONEY"<<endl;
        }break;

        case '4' :{ if(CheckAccount(2,100,a1))
                     {
                         temp_currentCandies=a1.getCandies()-100;
                         a1.setCandies(temp_currentCandies);
                         a1.insertPokeball("Moon Ball");
                         convert=1;
                     }
                      else
                        cout<<"NO ENOUGH MONEY"<<endl;
        }break;

        case '5' :{ if(CheckAccount(2,100,a1))
                     {
                         temp_currentCandies=a1.getCandies()-100;
                         a1.setCandies(temp_currentCandies);
                         a1.insertPokeball("Nest Ball");
                         convert=1;
                     }
                      else
                        cout<<"NO ENOUGH MONEY"<<endl;
        }break;

        case '6' :{ if(CheckAccount(2,100,a1))
                     {
                         temp_currentCandies=a1.getCandies()-100;
                         a1.setCandies(temp_currentCandies);
                         a1.insertPokeball("Net Ball");
                         convert=1;
                     }
                     else
                        cout<<"NO ENOUGH MONEY"<<endl;
        }break;

        default : cout<<"\a";
                cout<<"Wrong Input Value";
    }

     if(convert)
    {
    cout<<"\n\n\n\t\t\tTransaction Succesfull ";
    }
    else{
        cout<<"\n\n\n\t\t\tTransaction Failed ";}
        current_Account(a1);

   system("pause");
    display_Shop_Menu(a1);



}
void Shop::convertToCoins(Player &a2)
{
    system("cls");
    system("color 7c");
    bool convert=0;
    int temp_currentCoins=0;
    int temp_currentCandies=0;

    cout<<"\n\n\t\t\tCoins"<<setw(37)<<"Price"<<endl;
    cout<<"\n\t\t\t1.50 Coins"<<setw(37)<<"500 Candies"<<endl;
    cout<<"\t\t\t2.40 Coins"<<setw(37)<<"400 Candies"<<endl;
    cout<<"\t\t\t3.10 Coins"<<setw(37)<<"100 Candies"<<endl;
    current_Account(a2);

    cout<<"\n\t\t\tYour Choice : ";
    char choice;
    cin>>choice;
    switch(choice)
    {
        case '1' :{if(CheckAccount(2,500,a2))
                      {
                          temp_currentCoins=a2.getCoins()+50;
                          temp_currentCandies=a2.getCandies()-500;
                           a2.setCoins(temp_currentCoins);
                          a2.setCandies(temp_currentCandies);
                          convert=true;
                      }
                      else
                      {
                          cout<<"\n\n\n\t\t\tNo enough Candies!"<<endl;
                      }
                      }break;

        case '2' :{if(CheckAccount(2,400,a2))
                      {
                          temp_currentCoins=a2.getCoins()+40;
                          temp_currentCandies=a2.getCandies()-400;
                          a2.setCoins(temp_currentCoins);
                          a2.setCandies(temp_currentCandies);
                          convert=true;
                      }
                       else
                      {
                          cout<<"\n\n\n\t\t\tNo enough Candies!"<<endl;
                      }
                      }break;

        case '3' :{if(CheckAccount(2,100,a2))
                      {
                          temp_currentCoins=a2.getCoins()+10;
                          temp_currentCandies=a2.getCandies()-100;
                          a2.setCoins(temp_currentCoins);
                          a2.setCandies(temp_currentCandies);
                          convert=true;
                      }
                       else
                      {
                          cout<<"\n\n\n\t\t\tNo enough Candies!"<<endl;
                      }
                      }break;

        default : cout<<"NO RECORDS"<<endl;
    }
    if(convert)
    {
    cout<<"\n\n\n\t\t\tTransaction Succesfull ";
    }
    else{
        cout<<"\n\n\n\t\t\tTransaction Failed ";}
        current_Account(a2);

   system("pause");
    display_Shop_Menu(a2);


}
void Shop::convertToCandies(Player &a3)
{
    system("cls");
    system("color 7c");
    bool convert=0;
    int temp_currentCoins=0;
    int temp_currentCandies=0;

    cout<<"\n\n\t\t\tCandies"<<setw(37)<<"Price"<<endl;
    cout<<"\n\t\t\t1.500 Candies"<<setw(33)<<"80 Coins"<<endl;
    cout<<"\t\t\t2.400 Candies"<<setw(33)<<"60 Coins"<<endl;
    cout<<"\t\t\t3.100 Candies"<<setw(33)<<"30 Coins"<<endl;
    current_Account(a3);
    //cout<<"\n\t\t\tYour current coins is :"<<User.getCoins()<<endl;
    //cout<<"\t\t\tYour current candies is :"<<User.getCandies()<<endl;
    cout<<"\n\t\t\tYour Choice : ";
    char choice;
    cin>>choice;
    switch(choice)
    {
        case '1' :{if(CheckAccount(1,80,a3))
                      {
                          temp_currentCoins=a3.getCoins()-80;
                          temp_currentCandies=a3.getCandies()+500;
                          a3.setCoins(temp_currentCoins);
                          a3.setCandies(temp_currentCandies);
                          convert=1;
                      }
                      else
                        cout<<"\n\t\t\tNo enough Coins"<<endl;
                      }break;


        case '2' :{if(CheckAccount(1,60,a3))
                      {
                          temp_currentCoins=a3.getCoins()-60;
                          temp_currentCandies=a3.getCandies()+400;
                          a3.setCoins(temp_currentCoins);
                          a3.setCandies(temp_currentCandies);
                          convert=1;
                      }
                        else
                        cout<<"\n\t\t\tNo enough Coins"<<endl;
                      }break;

        case '3' :{if(CheckAccount(1,30,a3))
                      {
                          temp_currentCoins=a3.getCoins()-30;
                          temp_currentCandies=a3.getCandies()+100;
                          a3.setCoins(temp_currentCoins);
                          a3.setCandies(temp_currentCandies);
                          convert=1;
                      }
                        else
                        cout<<"\n\t\t\tNo enough Coins"<<endl;
                      }break;

        default : cout<<"NO RECORDS"<<endl;
    }
    if(convert)
    {
    cout<<"\n\n\n\t\t\tTransaction Succesfull ";
    }
    else{
        cout<<"\n\n\n\t\t\tTransaction Failed ";}
        current_Account(a3);

    // cout<<"\n\n\n\t\t\tYour Current Coins is "<<User.getCoins()<<""<<endl;
    //cout<<"\t\t\tYour current candies is :"<<User.getCandies()<<"\n\n"<<endl;
    system("pause");
    display_Shop_Menu(a3);
}
bool Shop::CheckAccount(int x,int m,Player &a5)
{
    if(x==1)
    {
        if(a5.getCoins()>=m)
        {

            return true;
        }
        else
        {
        return false;
    }
    }
    else
    {
        if(a5.getCandies()>=m)
        {
            return true;
        }
        else
            return false;
    }
}
void Shop::current_Account(Player &a4)
{
    cout<<"\n\t\t\tYour current coins is :"<<a4.getCoins()<<endl;
    cout<<"\t\t\tYour current candies is :"<<a4.getCandies()<<endl;
}
