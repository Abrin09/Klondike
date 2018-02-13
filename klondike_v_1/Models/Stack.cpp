//
// Created by ezsanab
//

#include "Stack.h"

namespace Models {
    Stack::Stack() {
        // TODO Auto-generated constructor stub
        stack = new (std::deque<Models::Card *>);
    }

    void Stack::setCardFront(Card *card) {
        stack->push_front(card);
    }

    void Stack::setCardBack(Card *card) {
        this->stack->push_back(card);

    }

    Card *Stack::getFrontCard() {
        Card *card = stack->front();
        deleteFrontCard();
        return card;
    }

    void Stack::deleteFrontCard() {
        stack->pop_front();
    }

    Card *Stack::getBackCard() {
        Card *card = stack->back();
        return card;
    }

    void Stack::deleteBackCard() {
        stack->pop_back();
    }

    void Stack::shuffle() {
        std::random_shuffle(stack->begin(), stack->end());
    }

    int Stack::getSize() const {
        return stack->size();
    }

    bool Stack::isEmpty() {
        return stack->empty();
    }

    bool Stack::isFull() {
        if (getSize() == MAX_NUM_CARDS) {
            return true;
        } else {
            return false;
        }
    }

    std::vector<Card *> Stack::getCards() {
        std::vector<Card *> result;
        for (int i = 0; i <= stack->size() - 1; i++) {
            result.push_back(reinterpret_cast<Card *&&>(stack->at(i)));
        }
        return result;
    }
}