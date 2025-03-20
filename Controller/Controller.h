#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Model/Model.h"
#include "../View/View.h"

class Controller {
   private:
    Model model;
    View view;

   public:
    void run();
};

#endif