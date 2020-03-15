#include "Menu.h"
#include <iostream>

Menu::Menu() = default;

void Menu::show_menu()
{
    cout << "Options:" << endl;

    for(int unsigned i=0; i<options.size(); i++)
    {
        cout << i+1 << ". " << options[i] << endl;
    }
}
void Menu::add_option(string option)
{
    options.push_back(option);
}
