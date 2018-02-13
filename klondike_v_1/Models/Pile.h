//
// Created by ezsanab
//

#ifndef KLONDIKE_PILE_H
#define KLONDIKE_PILE_H

#include "Card.h"
#include "Stack.h"
#include "Deck.h"

namespace Models {

    class Pile : public Stack {

    public:
        Pile();

        bool canSetCard(Card *card);

        bool canGetCard();
    };
}


#endif //KLONDIKE_PILE_H
