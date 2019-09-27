#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//continue with viewing all products and also create an option to create new products.
struct product{
    string name = "none";
    int hsn = 0;
    int stock = 0;
    int price = 0;
};
template <typename t>
struct  product_group{
    t name = "groupname";
    int gst_rate = 0;
    vector<product> products;
};
vector<product_group<string>> group;
void insertgroups();
void insertproducts();
int main_menu();
void create_new_group();
void display_groups();
void delete_a_group();
void view_products();
void create_new_product();
void delete_a_product();
int main()
{
    product prod;
    product_group<string> obj;
    string groupname;
  
    string productname;
    int i;
    insertgroups();
    insertproducts();
    while(1)
    {
        i = main_menu();
        if(i == 1)
            create_new_group();
        else if(i==2)
            display_groups();
        else if(i==3)
            delete_a_group();
        else if( i == 4)
            view_products();
        else if(i==5)
            create_new_product();
        else if(i == 6)
            delete_a_product();
        else if(i==7)
            break;
    }
    
	return 0;
}
void insertgroups()
{
    product_group<string> obj;
    
    obj.name = "power tools machine";  // index 0
    obj.gst_rate = 18;
    group.push_back(obj);
    
    obj.name = "rice huller parts";  // index 1
    obj.gst_rate = 5;
    group.push_back(obj);
    
    obj.name = "diesel engine and parts";  // index 2
    obj.gst_rate = 18;
    group.push_back(obj);
}
void insertproducts()
{
    product prod;
    prod.name = "JK Drill machine";
    prod.stock = 3;
    prod.price = 2100;
    prod.hsn = 3212;
    group[0].products.push_back(prod);
    
     prod.name = "Chop saw machine dewalt";
    prod.stock = 2;
    prod.price = 6700;
    prod.hsn = 3212;
    group[0].products.push_back(prod);
    
    prod.name = "Marble cutter bosch";
    prod.stock = 5;
    prod.price = 3700;
    prod.hsn = 3212;
    group[0].products.push_back(prod);
    
    prod.name = "block 1206";
    prod.stock = 6;
    prod.price = 360;
    prod.hsn = 0125;
    group[1].products.push_back(prod);
    
    prod.name = "Frame 4 no";
    prod.stock = 6;
    prod.price = 1200;
    prod.hsn = 0125;
    group[1].products.push_back(prod);
    
    prod.name = "dala 8 no";
    prod.stock = 3;
    prod.price = 560;
    prod.hsn = 0125;
    group[1].products.push_back(prod);
    
    prod.name = "Diesel Tank 5 ltrs";
    prod.stock = 5;
    prod.price = 680;
    prod.hsn = 3026;
    group[2].products.push_back(prod);
    
    prod.name = "Lp set usha AV1";
    prod.stock = 3;
    prod.price = 1650;
    prod.hsn = 3026;
    group[2].products.push_back(prod);
}
int main_menu()
{
    cout << "\n===========MAIN===========" << endl;
    cout << "\nEnter 1 to create a new group" << endl;
    cout << "\nEnter 2 to view all groups" << endl;
    cout << "\nEnter 3 to delete a group" << endl;
    cout << "\nEnter 4 to view products" <<  endl;
    cout << "\nEnter 5 to create a new products" <<  endl;
    cout << "\nEnter 6 to delete a new products" <<  endl;
    cout <<  "\nEnter 7 to quit" << endl;
    int i;
    cin >> i;
    return i;
}
void create_new_group()
{
    cout <<"\n Enter the name of the new group: " << endl;
    string groupsname;
    cin.ignore();
    getline(cin, groupsname);
    cin.ignore();
    cout << "\n Enter gst rate " << endl;
    int i;
    cin >> i;
    product_group <string>grp;
    grp.name = groupsname;
    grp.gst_rate = i;
    
    group.push_back(grp);
}
void display_groups()
{
    int i=1;
    cout << "\n" << endl;
    cout  << setw(10) << left<< "SL NO"<< left << setw(30) << "GROUP NAME" << right << setw(10)<< "GST RATE" << "\n" << endl;
    for(auto ptr = group.begin(); ptr!=group.end(); ptr++,i++)
        cout << setw(10) << left << setprecision(4)<< i << left << setw(30) << ptr->name  << right << setw(10)<< ptr->gst_rate << "%"<<  "\n" << endl;
    system("pause");
}
void delete_a_group()
{
    cout << "Enter the serial no. of the group that you want to delete" << endl;
    cout << "(Note that deleting a group will also deletes all products in that group)" << endl;
    int i;
    cin >> i;
    auto ptr = group.begin();
    i--;
    group.erase(ptr + i);
}
void view_products()
{
    cout << "Enter the SL NO of the group to view its items or enter  0  to view all items" << endl;
    int i,j=1;
    cin >> i;
    auto ptr = group.begin();
    if(i!=0)
    {
        cout << "\n======" <<group[i-1].name << "=======\n" << endl;
        cout << "\t"<< setw(4) <<right<< "SLNO" << setw(25) << "Product Name" << setw(8) << "HSN" << setw(8) << "PRICE" <<  setw(8) << "STOCK\n" << endl;
        for(auto ptr = group[i-1].products.begin(); ptr!=group[i-1].products.end(); ptr ++, j++)
        {
            cout << "\t" << setw(4) <<right<< j << setw(25)  << ptr->name << setw(8) << ptr->hsn << setw(8) << ptr->price <<  setw(8) << ptr->stock << endl;
        }
    }
    if(i==0)
    {
        i++;
        for(auto ptr = group.begin(); ptr!=group.end(); ptr++, i++)
        {
            cout << "\n"<< i<<") ======" <<group[i-1].name << "=======\n" << endl;
            cout << "\t"<< setw(4) <<right<< "SLNO" << setw(25) << "Product Name" << setw(8) << "HSN" << setw(8) << "PRICE" <<  setw(8) << "STOCK\n" << endl;
            j=1;
            for(auto ptr = group[i-1].products.begin(); ptr!=group[i-1].products.end(); ptr ++, j++)
            {
                cout << "\t" << setw(4) <<right<< j << setw(25)  << ptr->name << setw(8) << ptr->hsn << setw(8) << ptr->price <<  setw(8) << ptr->stock << endl;
            }
        }
    }
    system("pause");
}
void create_new_product()
{
    cout <<"\nEnter group number in which you want to enter a product"<<  endl;
    int i;
    cin >> i;
    product prod;
    cout << "enter the name of product: ";
    cin.ignore();
    getline(cin,prod.name);
    cin.ignore();
    cout << "Enter the opening stock of product: ";
    cin >> prod.stock;
    cout << "Enter the price of product: ";
    cin >> prod.price;
    cout << "Enter the hsn of product: ";
    cin >> prod.hsn;
    group[i-1].products.push_back(prod);
    
    cout << "\n new product is created" << endl;
    system("pause");
}
void delete_a_product()
{
    cout << "\n Enter group no of the product: ";
    int i;
    cin >> i;
    cout << "\n Enter sl no of the product: ";
    int j;
    cin >>j;
    auto ptr = group[i-1].products.begin();
    group[i-1].products.erase(ptr + (j - 1));
}