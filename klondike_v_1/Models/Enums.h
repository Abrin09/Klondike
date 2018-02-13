//
// Created by ezsanab
//

#ifndef KLONDIKE_ENUMS_H
#define KLONDIKE_ENUMS_H

namespace Enums {

    enum Suits {
        UNDEFINED,
        HEART,
        DIAMOND,
        CLUB,
        SPADE,
    };

    enum Colors {
        BLACK,
        RED,
    };

    enum States {
        UNDEFINED,
        START,
        MANUAL_GAME,
        DEMO_GAME,
        END,
        VICTORY
    };

};

#endif //KLONDIKE_ENUMS_H
