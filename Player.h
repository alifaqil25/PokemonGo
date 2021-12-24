#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Node.h"


using namespace std;

class Player
{
    public:
        Player();
        ~Player();
        void setCoins(int);
        int getCoins();
        int getCandies();
        void setPokeball(string);
        void setCandies(int);
        bool isEmpty();
        void displayPokeball();
        void insertPokeball(const string);
        void deletePokeball(const string);
        bool searchPokeball(const string);
        string getPokeball_at(int);
        int findLength();




    private:
         int Current_coins,Current_candies;
          Node* firstPtr;

};
#endif // PLAYER_H
