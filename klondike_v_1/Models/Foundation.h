//
// Created by ezsanab
//

#ifndef KLONDIKE_FOUNDATION_H
#define KLONDIKE_FOUNDATION_H

#include "Card.h"
#include "Stack.h"

namespace Models {

    class Foundation : public Stack {

    public:
        Foundation(int maxNum);

        bool canSetCard(Card *card);

        bool canGetCard();

    };

}
#endif //KLONDIKE_FOUNDATION_H
