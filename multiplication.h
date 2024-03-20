//
// Created by Lorenzo on 18/03/2024.
//

#ifndef WEEK_1_MULTIPLICATION_H
#define WEEK_1_MULTIPLICATION_H

#include "operation.h"

class multiplication : public operation {
public:
    virtual complex execute(complex a, complex b) const override;
};


#endif //WEEK_1_MULTIPLICATION_H
