#include "PokemonList.h"
#include "Fight.h"
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>

using namespace std;



void PokemonList::displayPokemon()
{
    system("cls");
    char choice;

        cout<<"Please choose your favorite Pokemon for their details and stats"<<endl;
         cout<<"1 - Haxorus\n2 - Fraxure\n3 - Axew\n4 - Chandelure\n5-to Main Menu"<<endl;
         cout<<"Your Choice : ";
         choice=getche();

         switch(choice)
        {
            case '1' :{ displayHaxorus(1);}break;

            case '2' : {displayFraxure(1);}break;

            case '3' : {displayAxew(1);}break;

            case '4' : {displayChandelure(1);}break;

            case '5' :{break;}

            default : cout<<"\a";
                cout<<"Wrong input value!!"<<endl;displayPokemon();
        }

}

void PokemonList::displayHaxorus(int x)
{
    system("cls");
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;
    cout<<setfill(' ')<<setw(25)<<"                   HAXORUS                   \n "<<endl;
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;


    cout<<"They are kind but can be relentless when defending territory. \nThey challenge foes with tusks that can cut steel."<<endl;

    cout<<"\n        STATS\n"<<endl;
    cout<<"80%"<<setw(8)<<"80%"<<setw(8)<<"20%"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"  "<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"  "<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"HP"<<setw(10)<<"Attack"<<setw(10)<<"Defense"<<endl;
    cout<<endl;
    system("pause");cout<<endl;
    cout<<x<<" TEST"<<endl;

}
void PokemonList::goBack()
{
 displayPokemon();
}
void PokemonList::displayFraxure(int x)
{
    system("cls");
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;
    cout<<setfill(' ')<<setw(25)<<"                   Fraxure                   \n "<<endl;
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;


    cout<<"Their tusks can shatter rocks.\nTerritory battles between Fraxure can be intensely violent."<<endl;

    cout<<"\n        STATS\n"<<endl;
    cout<<"80%"<<setw(8)<<"60%%"<<setw(8)<<"60%%"<<endl;
    cout<<"__"<<setw(8)<<"  "<<setw(8)<<"  "<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"HP"<<setw(10)<<"Attack"<<setw(9)<<"Defense"<<endl;

    cout<<endl;
    system("pause");cout<<endl;
 // if(x==1)
   // {
     //   goBack();}
    //else if(x==2)
    //{   Fight a;
      //  a.display_Menu();
    //}

}
void PokemonList::displayAxew(int x)
{
    system("cls");
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;
    cout<<setfill(' ')<<setw(25)<<"                   Axew                   \n "<<endl;
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;


    cout<<"They use their tusks to crush the berries they eat.\nRepeated regrowth makes their tusks strong and sharp."<<endl;

    cout<<"\n        STATS\n"<<endl;
    cout<<"40%"<<setw(8)<<"60%%"<<setw(8)<<"60%%"<<endl;
    cout<<"  "<<setw(8)<<"  "<<setw(8)<<"  "<<endl;
    cout<<"  "<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"HP"<<setw(10)<<"Attack"<<setw(9)<<"Defense"<<endl;

    cout<<endl;
    system("pause");cout<<endl;
  // if(x==1)
  //  {
    //    goBack();}
    //else if(x==2)
    //{   Fight a;
      //  a.display_Menu();
    //}

}
void PokemonList::displayChandelure(int x)
{
    system("cls");
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;
    cout<<setfill(' ')<<setw(25)<<"                   Chandelure                  \n "<<endl;
    cout<<setfill(' ')<<setw(25)<<"----------------------------------------------\n"<<endl;


    cout<<"Being consumed in Chandelure's flame burns up the spirit, leaving the body behind."<<endl;

    cout<<"\n        STATS\n"<<endl;
    cout<<"98%"<<setw(8)<<"80%%"<<setw(8)<<"80%%"<<endl;
    cout<<"__"<<setw(8)<<"  "<<setw(8)<<"  "<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"__"<<setw(8)<<"__"<<setw(8)<<"__"<<endl;
    cout<<"HP"<<setw(10)<<"Attack"<<setw(9)<<"Defense"<<endl;
    cout<<endl;
    system("pause");cout<<endl;

}

