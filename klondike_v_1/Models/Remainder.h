//
// Created by ezsanab
//

#ifndef KLONDIKE_REMAINDER_H
#define KLONDIKE_REMAINDER_H

#include "Card.h"
#include "Stack.h"

#include "Card.h"
#include "Stack.h"

namespace Models {

    class Remainder : public Stack {

    public:
        Remainder();

        bool canSetCard(Card *card);

        bool canGetCard();
    };
};


#endif //KLONDIKE_REMAINDER_H
