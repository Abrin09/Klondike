//
// Created by ezsanab
//

#include "Deck.h"

namespace Models {
    Deck::Deck() {

    }
    Deck::Deck(int maxNum) {
        this->MAX_NUM_CARDS = maxNum;
        for (int i = 1; i <= this->MAX_NUM_CARDS; i++) {
            this->setCardBack(new Card(Enums::Suits::HEART, i));
            this->setCardBack(new Card(Enums::Suits::DIAMOND, i));
            this->setCardBack(new Card(Enums::Suits::CLUB, i));
            this->setCardBack(new Card(Enums::Suits::SPADE, i));
        }
    }

    Deck *Deck::getInstance() {
        if (instance == nullptr)
            instance = new Deck();
        return instance;
    }

    void Deck::set_maxNum_cards(int maxNum) {
        this->MAX_NUM_CARDS = maxNum;
    }

    void Deck::set_cards() {
        for (int i = 1; i <= this->MAX_NUM_CARDS; i++) {
            this->setCardBack(new Card(Enums::Suits::HEART, i));
            this->setCardBack(new Card(Enums::Suits::DIAMOND, i));
            this->setCardBack(new Card(Enums::Suits::CLUB, i));
            this->setCardBack(new Card(Enums::Suits::SPADE, i));
        }
    }

}