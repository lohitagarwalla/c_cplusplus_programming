#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void display_list_of_class();
void delete_a_class();
int start();
void create_a_class();
vector<string> clx;
int main()
{
    start();
	return 0;
}
void create_a_class()
{
    system("cls");
    string classname;
    ofstream classes;
    classes.open("C:\\Users\\Lohit\\Desktop\\code\\c++\\decision_machine\\01students_attendance\\allclasses.txt",ios::app);
    if(classes.is_open())
        {
            cout <<"\t\nenter the name of class:  ";
            cin>>  classname;
            classes << classname << "\n";
            clx.push_back(classname);
            start();
        }
    else
        cout << "could not open file" << endl;
}
int start()
{
    
    system("cls");
    cout << "\n\tenter 1 to see the list of classes"<< endl;
    cout << "\n\tenter 2 to create a new class" << endl;
    cout << "\n\tenter 3 to delete a class" << endl;
    cout << "\n\tenter 4 to quit\n\n\t";
    int i;
    cin >> i;
    if(i == 1)
        display_list_of_class();
    if(i == 2)
        create_a_class();
   if(i == 3)
        delete_a_class();
    if(i == 4)
        return 0;
}
void display_list_of_class()
{
    system("cls");
    ifstream classlist;
    classlist.open("C:\\Users\\Lohit\\Desktop\\code\\c++\\decision_machine\\01students_attendance\\allclasses.txt");
    string ch;
    if(!classlist.is_open())
    {
        cout << ("could not open file") << endl;
        system("pause");
        start();
    }
    else
    {
        while(1)
        {
            classlist >> ch;
            cout << "\n\t" << ch << endl;
            if(classlist.eof())
                break;
        }
        for(auto str : clx)
            cout << "\n\t" << str << endl;
    }
    system("pause");
    start();
}
void delete_a_class()
{
    cout << "enter the name of class to delete: ";
    string str;
}