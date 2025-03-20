#ifndef PCBMODEL_H
#define PCBMODEL_H

class Model {
   public:
    static const double MY_TAX_DEDUCTION = 9000.00;

    static double CalculatePCB(double salary);
    static double CalculateIIT(double salary);
};

#endif