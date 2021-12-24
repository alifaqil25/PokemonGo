#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include "Shop.h"

using namespace std;


class Account
{
    friend class userProfile;
    public:
        Account();

        void readData();
        void showData();
        void registerAccount();
        void readRec();
        void loginAccount(int);
        void editRec();
        void setUniqID(string);
        void displayChoice();
        string getUserID();
        void Main_Menu();
        void setLoginResult(bool);
        bool getLoginResult();


    private:
        string uniQid;
        string userId,password;
        bool loginResult;
};

#endif // ACCOUNT_H
