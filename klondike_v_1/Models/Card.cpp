//
// Created by ezsanab
//
#include "Card.h"

namespace Models {

    Card::Card() {
        this->number = -1;
        this->visible = true;
        this->suit = Enums::Suits::UNDEFINED;
        setColor();
    }

    Card::Card(Enums::Suits suit, int num) {
        this->suit = suit;
        this->number = num;
        this->visible = true;
        setColor();
    }

    void Card::set(Enums::Suits suit, int num) {
        this->suit = suit;
        this->number = num;
    }

    int Card::getNumber() {
        return this->number;
    }

    Enums::Colors Card::getColor() {
        return this->color;
    }

    void Card::setColor() {
        if ((this->suit == Enums::Suits::SPADE) || (this->suit == Enums::Suits::CLUB)) {
            this->color = Enums::Colors::BLACK;
        } else {
            this->color = Enums::Colors::RED;
        }
    }

    Enums::Suits Card::getSuit() {
        return this->suit;
    }

    void Card::setVisibility(bool boolean) {
        this->visible = boolean;
    }

    bool Card::isVisible() {
        return this->visible;
    }
}
