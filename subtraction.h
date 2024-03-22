//
// Created by Lorenzo on 20/03/2024.
//

#ifndef WEEK_1_SUBTRACTION_H
#define WEEK_1_SUBTRACTION_H

#include "operation.h"

class subtraction : public operation {
public:
    virtual complex execute(complex a, complex b) const override;
};


#endif //WEEK_1_SUBTRACTION_H
