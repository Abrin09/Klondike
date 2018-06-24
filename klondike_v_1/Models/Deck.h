
//
// Created by ezsanab
//

#ifndef KLONDIKE_DECK_H
#define KLONDIKE_DECK_H

#include <list>
#include <deque>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include "Card.h"
#include "Stack.h"

namespace Models {

    class Deck : public Stack {

    public:
        static Deck *instance;

        Deck();

        Deck(int maxNum);

        static Deck *getInstance();

        void set_maxNum_cards(int maxNum);

        void Deck::set_cards();

    };
}


#endif //KLONDIKE_DECK_H
