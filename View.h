#ifndef VIEW_H
#define VIEW_H
#include <map>
#include <windows.h>
#include <conio.h>
#include "SelectedMenu.h"
#include "Menu.h"

class View
{
    map <SelectedMenu, Menu> menus;
    SelectedMenu selected_menu;
    int selected_action;

public:
    View();
    void show_selected_menu();
    void ask_for_action();
    int get_selected_action();
    SelectedMenu get_selected_menu();
    void set_selected_menu(SelectedMenu);
    void clear_screen();
};
#endif // VIEW_H
