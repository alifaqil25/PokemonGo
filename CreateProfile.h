#ifndef USERPROFILE_H
#define USERPROFILE_H
#include <string>

using namespace std;


class userProfile
{
    public:;
         userProfile(string x);
        inline void setProfile();
         inline void showProfile();
         inline void recProfile();
         void readProfile();
        int getRanking();
      inline void displayMenu();
      int getUniqueId();
      void recUniq();
      bool check_ID(int);



    private:
        string name,gender,gmail;
        string uniqID;
        int ranking,age;
        float candies,stardust;
};

#endif // USERPROFILE_H
