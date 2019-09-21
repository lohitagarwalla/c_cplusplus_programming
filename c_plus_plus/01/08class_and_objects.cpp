#include <iostream>
using namespace std;

//declaring classes
class Players {
    /* there are three types of class member access modifier
        they are public , private and protected 
        if nothing is mentioned it is private
        
    */
public:                         
    //attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string talk_to_say) 
    {cout << name << " says " << talk_to_say << endl;}
    bool is_dead();
    
};                                  //there is a semicolon at the end of a class

class Account{
public:
  //attributes
  string name;
  double balance;
  
  //methods
  void deposit(double bal) {balance += bal; cout << "in deposit" << endl;}
  void withdraw(double bal){balance -= bal; cout << "in withdraw" << endl;}
    
};

int main() {
    //examples of Account class
    Account *lohit;
    lohit = new Account;
    
    //using arrow operator
    lohit->balance = 125000 ;
    lohit->deposit(5000.00);
    
    cout << "remaining balance: " << lohit->balance << endl;
    
    //or by using pointer dereference
    // (*lohit).balance;
    (*lohit).withdraw(1000.00);
    cout << "remaining balance: " << lohit->balance << endl;
    delete lohit;
    
    
    
    //examples of Players class;
    Players rahul;
    Players hero;
    
    // Players arr[] {frank, bob};
    
    // vector <Players> player_vector {daisy};
    // player_vector.push_back(marley);
    
    Players *enemy {nullptr};
    enemy = new Players;
    
    delete enemy;
    
    // accessing methods and attributes of Players
    rahul.name = "rahul Agarwalla";
    rahul.health = 60;
    rahul.xp = 70;
    rahul.talk("hi there");
    
	return 0;
}
