//
// Created by ezsanab
//

#ifndef KLONDIKE_WASTE_H
#define KLONDIKE_WASTE_H

#include "Card.h"
#include "Stack.h"

namespace Models {

    class Waste : public Stack {

    public:
        Waste();

        bool canSetCard(Card *card);

        bool canGetCard();
    };
};


#endif //KLONDIKE_WASTE_H
