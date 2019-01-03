#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "SelectedMenu.h"
#include "Menu.h"
#include "View.h"

using namespace std;

class Controller
{
    View view;

public:
    Controller();
    void run();
};

#endif // VIEW_H
