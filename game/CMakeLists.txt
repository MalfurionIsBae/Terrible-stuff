cmake_minimum_required(VERSION 3.0)
project(game)

include_directories(klasy klasy/warrior klasy/mage klasy/priest party boss encounter)

set(SOURCES
    main.cpp
    klasy/character.cpp
    klasy/warrior/warrior.cpp
    klasy/mage/mage.cpp
    klasy/priest/priest.cpp
    party/party.cpp
    boss/dragon.cpp
    encounter/encounter.cpp
)

add_executable(game ${SOURCES})


