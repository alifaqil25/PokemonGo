#include "Fight.h"
#include "Shop.h"
//#include "PokemonList.cpp"
#include <conio.h>
#include <stdlib.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include<time.h>



Fight::Fight(Player &record)
{
    setPokemonEncounter();
    player_movement(record);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void Fight::player_movement(Player &gameplay)
{
    char choice;
    int randomNum;
    //do{
            system("cls");
    cout<<"==============================================\n"<<endl;
    cout<<"                PLAYER MOVEMENT               "<<endl;
    cout<<"\n=============================================="<<endl;
    cout<<"\n\n1- 10 meter to the South\n2- 10 meter to the North"<<endl;
    cout<<"3- 10 meter to the West\n4- 10 meter to the East\n5- to Main Menu"<<endl;
    choice=getche();

    switch(choice)
    {
        case '1' :

        case '2' :

        case '3' :

        case '4' :{srand(time(NULL));randomNum=rand()%2+1;pokemonExist(randomNum,gameplay);}break;

        case '5' :{break;}

        default :cout<<"\a";
    }



}
void Fight::pokemonExist(int x,Player &gameplay)
{
    if(x==1)
    {
        display_Menu(gameplay);
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\t\t\t\t\tThere is no pokemon near your place"<<endl;
        system("pause");
        player_movement(gameplay);
    }
}
void Fight::display_Menu(Player &gameplay)
{
    char choice;

    system("cls");

    cout<<"\nThere is Pokemons NEAR YOU!!...."<<endl;
    cout<<"\n\n\n\n\n\t\t\t\t";system("pause");
    displayPokemonEncountered();

    system("cls");

        cout<<"\n\n\t\t\t2. CATCH!!"<<endl;
        cout<<"\t\t\t3.Back to Movement Menu"<<endl;
        cout<<"\t\t\tYour Choice : ";

        choice=getche();

        switch(choice)
        {

            case '2': {displayPokeball(gameplay);}break;

            case '3':{player_movement(gameplay);}break;

            default : cout<<"\a";
        }




}
void Fight::setPokemonEncounter()
{
    srand(time(NULL));
    int randomPokemon;
    randomPokemon=rand()%4+1;
    if(randomPokemon==1)
    {
        pokemonEncounter="Haxorus";
    }
    else if(randomPokemon==2)
    {
        pokemonEncounter="Axew";
    }
    else if(randomPokemon==3)
    {
        pokemonEncounter="Fraxure";
    }
    else if(randomPokemon==4)
    {
        pokemonEncounter="Chandelure";
    }
}

string Fight::getPokemonEncounter()
{
    return pokemonEncounter;
}

void Fight::displayPokemonEncountered()
{


    if(pokemonEncounter=="Haxorus")
    {
        Pokedex.displayHaxorus(2);
    }
    else if(pokemonEncounter=="Axew")
    {
        Pokedex.displayAxew(2);
    }
    else if(pokemonEncounter=="Fraxure")
    {
        Pokedex.displayFraxure(2);
    }
    else if(pokemonEncounter=="Chandelure")
    {
        Pokedex.displayChandelure(2);
    }
}
void Fight::displayPokeball(Player &a1)
{
    system("cls");

    cout<<"================================="<<endl;
    cout<<"     CHOOSE YOUR WEAPON!"<<endl;
    cout<<"================================="<<endl;




    a1.displayPokeball();

    int index;
    cout<<"\n\nYour Choice: "<<endl;
    cin>>index;

    while(!cin)
    {
        cout<<"\nwrong input values"<<endl;
    }

    if(a1.getPokeball_at(index-1)=="Great Ball")
    {
        pokeball=Great_Ball;

    }
    else if(a1.getPokeball_at(index-1)=="Ultra Ball")
    {
        pokeball=Ultra_Ball;

    }
  else if(a1.getPokeball_at(index-1)=="Lure Ball")
    {
    pokeball=Lure_Ball;

    }
    else if(a1.getPokeball_at(index-1)=="Moon Ball")
    {
        pokeball=Moon_Ball;

    }
    else if(a1.getPokeball_at(index-1)=="Default Ball")
    {
        pokeball=Default_Ball;

    }
    else if(a1.getPokeball_at(index-1)=="Nest Ball")
    {
        pokeball=Nest_Ball;

    }
    else if(a1.getPokeball_at(index-1)=="Net Ball")
    {
        pokeball=Net_Ball;

    }
     displayResult(a1);

}
bool Fight::catch_or_not()
{
    double probability,pokemonPower;
   srand(time(NULL));

    double const Haxorus=20.0,Fraxure=60.0,Axew=60.0,Chandelure=80.0;
    if(pokemonEncounter=="Haxorus")
    {

        probability=((rand()%30+1)*pokeball*0.001);
        pokemonPower=((rand()%10+1)*Haxorus*0.001);
    }
    else if(pokemonEncounter=="Fraxure")
    {

        probability=((rand()%30+1)*pokeball*0.001);
        pokemonPower=((rand()%10+1)*Fraxure*0.001);
    }
     if(pokemonEncounter=="Axew")
    {

        probability=((rand()%30+1)*pokeball*0.001);
        pokemonPower=((rand()%10+1)*Axew*0.001);
    }
     if(pokemonEncounter=="Chandelure")
    {

        probability=((rand()%30+1)*pokeball*0.001);
        pokemonPower=((rand()%10+1)*Chandelure*0.001);
    }

    if(probability>=pokemonPower)
    {
        return true;
    }
    else
    {
        return false;
    }

}
void Fight::displayResult(Player &gameplay)
{
    system("cls");
    cout<<"Wait a Minute....."<<endl;
    delay(2000);

    system("cls");
    if(catch_or_not())
    {
        cout<<"\n\n\n\n\t\t\t\tCONGRATULATIONS!! "<<pokemonEncounter<<" have been caught"<<endl;
        setReward(gameplay);
        cout<<"\n\n\t\t30 Candies have been added to your accounts.Your Current Candies is : "<<gameplay.getCandies()<<endl<<endl;
        system("pause");
    }
    else
    {
        cout<<"\n\n\n\n\t\t\t\tI'M SORRY...Pokemon had run away before it was captured"<<endl;
        system("pause");
    }
}
void Fight::setReward(Player &gameplay)
{
    int tempCandies;
    tempCandies=gameplay.getCandies()+30;
    gameplay.setCandies(tempCandies);
}



