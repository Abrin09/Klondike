//
// Created by ezsanab
//

#ifndef KLONDIKE_CARD_H
#define KLONDIKE_CARD_H

#include "Enums.h"

namespace Models {
    class Card {

    public:
        Card();

        Card(Enums::Suits suit, int num);

        void set(Enums::Suits suit, int num);

        int getNumber();

        Enums::Suits getSuit();

        Enums::Colors getColor();

        void setColor();

        void setVisibility(bool boolean);

        bool isVisible();

        void allow(bool boolean);

        bool canMove();

    private:
        int number;
        bool visible;
        Enums::Suits suit;
        Enums::Colors color;
    };

} /* namespace Models */

#endif
