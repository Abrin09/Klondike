cmake_minimum_required(VERSION 3.8)
project(Klondike)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "klondike_v_1/Klondike.cpp" "klondike_v_1/Klondike.h" klondike_v_1/Models/Card.cpp klondike_v_1/Models/Card.h klondike_v_1/Models/Foundation.cpp klondike_v_1/Models/Foundation.h klondike_v_1/Models/Stack.cpp klondike_v_1/Models/Stack.h klondike_v_1/Models/Enums.h klondike_v_1/Models/Waste.cpp klondike_v_1/Models/Waste.h klondike_v_1/Models/Pile.cpp klondike_v_1/Models/Pile.h klondike_v_1/Models/Remainder.cpp klondike_v_1/Models/Remainder.h klondike_v_1/Models/Deck.cpp klondike_v_1/Models/Deck.h klondike_v_1/Controllers/Controller.cpp klondike_v_1/Controllers/Controller.h)
add_executable(Klondike ${SOURCE_FILES})