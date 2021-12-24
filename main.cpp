#include "Account.h"
#include "PokemonList.h"
#include "Shop.h"
#include "CreateProfile.h"
#include "Player.h"
#include "Fight.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <unistd.h>
#include <windows.h>

using namespace std;

void Main_Menu();
void INTRO();
void goodBye();
int main()
{
    INTRO();
    bool login;
    string userID;
    Account user1;
    Player gameplay;
    gameplay.insertPokeball("Default Ball");
    login=user1.getLoginResult();
    userID=user1.getUserID();

    if(login==1)
    {
        system("cls");
                cout<<"---------------------------------------\n"<<endl;
                cout<<"            ACCESS GRANTED....              ";
                cout<<"\n\n--------------------------------------"<<endl;
                Sleep(200);
    }
    char choice;


    do{
        Main_Menu();
       choice=getche();
    switch(choice)
    {
        case '1' :{ userProfile obj(userID);}break;

        case '2' :{Fight obj1(gameplay);}break;

        case '3' :{ Shop obj1(gameplay);}break;

        case '4' : {PokemonList obj5;
                    obj5.displayPokemon();}break;

        case '5' : {
            goodBye();exit(EXIT_SUCCESS);}break;

        default :cout<<"\a";
                 cout<<"\nWrong Input Value";
    }
    }while(choice!=5);


}
void INTRO()
{
    cout<<"\t\t\t==================================================================="<<endl;
    cout<<"\t\t\t     * * *    * * *   *   *  * * *  *       *   * * *   *      *         "<<endl;
    cout<<"\t\t\t     *    *  *     *  * *    *      * *   * *  *     *  * *    *      "<<endl;
    cout<<"\t\t\t     * * *  *       * *      * * *  *   *   * *       * *   *  *      " <<endl;
    cout<<"\t\t\t     *       *     *  * *    *      *       *  *     *  *    * *     "<<endl;
    cout<<"\t\t\t     *        * * *   *   *  * * *  *       *   * * *   *      *   "<<endl;
    cout<<"\t\t\t==================================================================="<<endl;
    cout<<"\t\t\t                        Gotta catch 'em all!   "<<endl;

    cout<<"\t\t\t\n\n\n";
    system("pause");

}
void Main_Menu()
{
    system("color 7");

    system("cls");
    cout<<"\n\n\t\t\tMAIN MENU\n\n"<<endl;
    cout<<"\t\t1 - Pogo Profile"<<endl;
    cout<<"\t\t2 - Catch a Pokemon"<<endl;
    cout<<"\t\t3 - Shop"<<endl;
    cout<<"\t\t4 - Pokemon List"<<endl;
    cout<<"\t\t5-Exit Game"<<endl;
    cout<<"\n\n\t\tYour Choice :";
}
void goodBye()
{
    cout<<"\n\n\t\t\tTHANK YOU! HOPE TO MEET YOU AGAIN!!"<<endl;
}



