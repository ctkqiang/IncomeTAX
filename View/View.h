#include <string>

#ifndef VIEW_H
#define VIEW_H

class View {
   public:
    void RenderUI(double &salary, int &choice, double &tax,
                  std::string &country);
};

#endif