#include "Player.h"
#include <stdlib.h>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
#include <iostream>


using namespace std;

Player::Player()
{
    setCoins(50);
    setCandies(100);
    firstPtr=NULL;
}

Player::~Player()
{
    //dtor
}
void Player::setCoins(int x)
{
    Current_coins=x;
}
int Player::getCoins()
{
    return Current_coins;
}
void Player::setCandies(int x)
{
    Current_candies=x;
}
int Player::getCandies()
{
    return Current_candies;
}
bool Player::isEmpty(){
    if (firstPtr==0)
        return true;
    else
        return false;
}

void Player::displayPokeball() {

    Node *tmp = firstPtr;
    if (isEmpty()) {
        cout << "EMPTY\n";
        return;
    }

    while (tmp!=NULL) {
            for(int i=1;i<=findLength();i++)
            {
                cout << i <<" - " <<tmp->getData()<<endl;
                //break;
                tmp = tmp->getNext();
            }


    }
}

void Player::insertPokeball(const string x) {

    Node* newNode = new Node();
    newNode->setData(x);
    newNode->setNext(NULL);

    Node *tmp = firstPtr;

    if (isEmpty())
        firstPtr = newNode;
    else {
        while (tmp->getNext() != NULL )
            tmp = tmp->getNext();
        tmp->setNext(newNode);
    }
}

void Player::deletePokeball(const string key){

    if (!searchPokeball(key)) {
        cout << "Item " << key << " not found\n";
        return;
    }

    Node *tmp = firstPtr;
    Node *prev;

    while (tmp!=NULL) {
       if (tmp->getData() == key)
           break;
       prev = tmp;
       tmp = tmp->getNext();
    }

    if (tmp == firstPtr)
        firstPtr = tmp->getNext();
    else
        prev->setNext(tmp->getNext());

    delete tmp;
    cout << "Item " << key << " deleted\n";
}

bool Player::searchPokeball(const string key) {
    Node *tmp = firstPtr;

    while (tmp != NULL) {
        if (tmp->getData() == key)
            return true;
        tmp = tmp->getNext();
    }

    return false;
}
int Player::findLength()
{
    if (isEmpty())
        return 0;
    int counter = 1;
    Node *tmp = firstPtr;
    while (tmp->getNext()!=NULL)
    {
            counter++;
    tmp = tmp->getNext();
    }
    return counter;
}
string Player::getPokeball_at(int n)
{
    Node *tmp=firstPtr;
    int count = 0;
    while (tmp != NULL)
    {
        if (count == n)
            return(tmp->data);
        count++;
        tmp = tmp->nextPtr;
    }
}



