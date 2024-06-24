cmake_minimum_required(VERSION 3.0)
project(game)

include_directories(klasy party boss encounter)

set(SOURCES
    main.cpp
    klasy/character.cpp
    klasy/warrior.cpp
    klasy/mage.cpp
    klasy/priest.cpp
    party/party.cpp
    boss/dragon.cpp
    encounter/encounter.cpp
)

add_executable(game ${SOURCES})


