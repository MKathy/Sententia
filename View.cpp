#include "View.h"

using namespace std;

View::View() : selected_menu(MAIN_MENU)
{
    Menu main_menu;
    Menu submenu;

    main_menu.add_option("Show sentences");
    main_menu.add_option("New sentence");
    main_menu.add_option("Exit");
    submenu.add_option("Newest sentences");
    submenu.add_option("Sentences by date");
    submenu.add_option("Back");

    menus[MAIN_MENU] = main_menu;
    menus[SUBMENU] = submenu;
}

void View::show_selected_menu()
{
    menus[selected_menu].show_menu();
}
