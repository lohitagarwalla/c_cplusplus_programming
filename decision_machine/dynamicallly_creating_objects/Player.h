#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using namespace std;
class Player
{
private:
    string name;
public:
    Player(string name_val = "none");
    string getname();
    ~Player();

};

#endif // _PLAYER_H_