//
// Created by ezsanab
//

#ifndef KLONDIKE_STACK_H
#define KLONDIKE_STACK_H

#include <list>
#include <deque>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include "Card.h"

namespace Models {
    class Stack {
    protected:
        std::deque<Models::Card *> *stack;
        int MAX_NUM_CARDS;

    public:
        Stack();

        void setCardFront(Card *card);

        void setCardBack(Card *card);

        Card *getFrontCard();

        void deleteFrontCard();

        Card *getBackCard();

        void deleteBackCard();

        void shuffle();

        int getSize() const;

        bool isEmpty();

        bool isFull();

        std::vector<Card *> getCards();
    };

}

#endif //KLONDIKE_STACK_H
