#pragma once
#include "D:\Pokemon\include\Pokemon\Pokemon.hpp"
namespace N_Battle
{
    using namespace N_Pokemon;

    struct BattleState {
        Pokemon* playerPokemon;
        Pokemon* wildPokemon;
        bool playerTurn;
        bool battleOngoing;
    };
}