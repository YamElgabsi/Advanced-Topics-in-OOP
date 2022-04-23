//
// Created by YamEl on 4/19/2022.
//

#ifndef HW1_OMICRON_H
#define HW1_OMICRON_H

#include "SARS_CoV_2.h"

class Omicron : public SARS_CoV_2{
public:
    //Constructor & Destructor
    Omicron(const vector<char> &dna, int dim, SARS_CoV_2 *ancestor = NULL);
    ~Omicron() = default;

    //Updates
    void personalChange() override;

    //Prints
    void printStrain() override;


};

#endif //HW1_OMICRON_H
