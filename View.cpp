#include "View.h"
#include <iostream>

using namespace std;

View::View() : selected_menu(MAIN_MENU)
{
    Menu main_menu;
    Menu display_sententia_menu;

    main_menu.add_option("Show sentences");
    main_menu.add_option("New sentence");
    main_menu.add_option("Exit");
    display_sententia_menu.add_option("Newest sentences");
    display_sententia_menu.add_option("Sentences by date");
    display_sententia_menu.add_option("Back");

    menus[MAIN_MENU] = main_menu;
    menus[DISPLAY_SENTENTIA_MENU] = display_sententia_menu;
}

void View::show_selected_menu()
{
    menus[selected_menu].show_menu();
}

void View::ask_for_action()
{
    cout << "Your choice: ";
    selected_action = getch()-48;
}

int View::get_selected_action()
{
    return selected_action;
}

SelectedMenu View::get_selected_menu()
{
    return selected_menu;
}

void View::set_selected_menu(SelectedMenu new_selected_menu)
{
    selected_menu = new_selected_menu;
}

void View::clear_screen()
{
    system("cls");
}
