#pragma once
#include "D:\Pokemon\include\Character\Player.hpp"
#include <iostream>
class Player;

namespace N_Character
{
    using namespace std;
    using namespace N_Player;

    class ProfessorOak {
    public:
        string name;

        ProfessorOak(string p_name);
        void greetPlayer(Player* player);
        void offerPokemonChoices(Player* player);
        void explainMainQuest(Player* player);
    };
}