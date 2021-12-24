#ifndef FIGHT_H
#define FIGHT_H

#include <string>
#include "PokemonList.h"
#include "Player.h"


class Fight
{

    public:
        Fight(Player &);
        void player_movement(Player &);
        void pokemonExist(int,Player &);
        void displayPokemonEncountered();
        void display_Menu(Player &);
        void displayPokeball(Player &);
        void displayResult(Player &);
        void setReward(Player &);
        bool catch_or_not();
        void setPokemonEncounter();
        string getPokemonEncounter();


    private:
        string pokemonEncounter;
        PokemonList Pokedex;
        float pokeball;
        int candies;
        float static const Great_Ball=90.0,Ultra_Ball=70.0,Lure_Ball=50.0,Moon_Ball=40.0,Default_Ball=10.0,Nest_Ball=30.0,Net_Ball=30.0;
};

#endif // FIGHT_H
