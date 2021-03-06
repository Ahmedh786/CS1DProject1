#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>
#include <QString>
#include <string>
using namespace std;

struct menu
{
    string name;
    double price;
    int quantity;
};

class Restaurant
{
    private:
        vector<menu> menuItems;
        vector<double> distance;
        double sDistance;
        string rName;
        string stringid;
        int id;
        int NoOfMenuItems;
        int counter;
    public:
        Restaurant();
        Restaurant(string name);
        list<Restaurant> PopRestaurantList(string file);
        list<Restaurant> PopRestaurantListFromFile(string filename);
        void editMenu();//******************
        string getrName();
        double getsDistance();
        int getId();
        vector<double> getDistances();
        vector<menu> getMenu();
        bool IsEmpty();
        void addMenu();//*********************
        void deleteMenu();//*************
        void addRestaurant(list<Restaurant> &r1); //adds restaurant to list
        void removeRestaurant(list<Restaurant> &r1); //removes restaurant from list
        void setName(string newName);
        void setId(int newId);
        void setDistances(vector<double> distanceVec);
        void setNumberMenuItems(int menuItems);
        void setMenuItems(vector<menu> newMenues);
        void output(list<Restaurant> restaurantList);
        void addDistances(list<Restaurant> &r1, Restaurant* temp)
};
