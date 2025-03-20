#include "Model.h"

double Model::CalculatePCB(double salary) {
    if (salary <= 5000) {
        return 0;
    } else if (salary <= 20000) {
        return (salary - 5000) * 0.01;
    } else if (salary <= 35000) {
        return (150 + (salary - 20000) * 0.03);
    } else if (salary <= 50000) {
        return (450 + (salary - 35000) * 0.06);
    } else if (salary <= 70000) {
        return (900 + (salary - 50000) * 0.11);
    } else if (salary <= 100000) {
        return (2200 + (salary - 70000) * 0.19);
    } else if (salary <= 400000) {
        return (5700 + (salary - 100000) * 0.25);
    } else {
        return (75000 + (salary - 400000) * 0.26);
    }
}

double Model::CalculateIIT(double salary) {
    if (salary <= 36000) {
        return salary * 0.03;
    } else if (salary <= 144000) {
        return salary * 0.10 - 2520;
    } else if (salary <= 300000) {
        return salary * 0.20 - 16920;
    } else if (salary <= 420000) {
        return salary * 0.25 - 31920;
    } else if (salary <= 660000) {
        return salary * 0.30 - 52920;
    } else if (salary <= 960000) {
        return salary * 0.35 - 85920;
    } else {
        return salary * 0.45 - 181920;
    }
}
