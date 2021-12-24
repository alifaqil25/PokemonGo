#ifndef POKEMONLIST_H
#define POKEMONLIST_H
#include <string>
#include <iostream>


using namespace std;

class PokemonList
{
    public:
        PokemonList(){};
        void setPokemon();
        void displayPower();
        void displayHaxorus(int);
        void displayFraxure(int);
        void displayAxew(int);
        void displayChandelure(int);
        void displayPokemon();
        void goBack();


    protected:


        string namePokemon;



};

#endif // POKEMONLIST_H
