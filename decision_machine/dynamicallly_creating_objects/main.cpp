#include <iostream>
#include <vector>
#include "Player.h"
#include<string>
using namespace std;
void create(string name,vector <Player> *myvec);
int main()
{
	int i;
    vector<Player> myvec;
    string name;
    while(1)
    {
        cout <<"want to create a new object ? type name : type quit" << endl;
        getline(cin, name);
        if(name == "quit")
            break;
        create(name,&myvec);
    }
    for(auto s: myvec)
        cout << s.getname()<< endl;
	return 0;
}
void create(string name,vector <Player> *myvec)
{
    myvec->push_back(Player(name));
}