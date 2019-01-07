#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "View.h"

using namespace std;

class Controller
{
    View view;

public:
    Controller();
    void run();
    int action_response();
};

#endif // VIEW_H
