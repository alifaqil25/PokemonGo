#ifndef SHOP_H
#define SHOP_H

#include "Player.h"

class Shop
{
    public:
        Shop(){};
        Shop(Player &);
        void display_Shop_Menu(Player &);
        void convertToCandies(Player &);
        void convertToCoins(Player &);
        void buyPokeball(Player &);
        void displayPokeBall();
        bool CheckAccount(int,int,Player &);
        void current_Account(Player &);

      friend class Fight;


    private:
        int currentStock;
};

#endif // SHOP_H
