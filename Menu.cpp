#include "Menu.h"

using namespace std;

Menu::Menu(){}
void Menu::show_menu()
{
    //vector < string > options {"Show sentences", "New sentence", "Exit"};
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
