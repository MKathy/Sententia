#ifndef VIEW_H
#define VIEW_H
#include <iostream>
#include <map>
#include "SelectedMenu.h"
#include "Menu.h"

using namespace std;

class View
{
    map <SelectedMenu, Menu> menus;
    SelectedMenu selected_menu;
    int selected_action;

public:
    View();
    void show_selected_menu();
};

#endif // VIEW_H
