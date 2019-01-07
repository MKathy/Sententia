#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller()= default;

void Controller::run()
{
    while(true)
    {
        view.clear_screen();
        view.show_selected_menu();
        int response = action_response();

        switch(view.get_selected_menu()) {
        case MAIN_MENU:
            switch(response) {
            case 1:
                view.set_selected_menu(DISPLAY_SENTENTIA_MENU);
                break;
            case 2:
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << endl << "There is no such a option.";
                Sleep(1000);
                break;
            }
            break;
        case DISPLAY_SENTENTIA_MENU:
            switch(response) {
            case 1:

                break;
            case 2:
                break;
            case 3:
                view.set_selected_menu(MAIN_MENU);
                break;
            default:
                break;
            }
            break;
        }
    }
}
int Controller::action_response()
{
    view.ask_for_action();
    return view.get_selected_action();
}
