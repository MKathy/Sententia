#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <vector>

using namespace std;

class Menu
{
    vector <string> options;
public:
    Menu();
    void show_menu();
    void add_option(string option);
};

#endif // MENU_H
