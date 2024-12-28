#include "D:/Pokemon/include/Pokemon/Pokemons/Pidgey.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include "D:/Pokemon/include/Battle/Move/move.hpp"

#include <iostream>

#include "D:/Pokemon/include/Battle/BattleManager.hpp"
#include "D:/Pokemon/include/Utility/Utility.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Pidgey::Pidgey()
            : Pokemon("Pidgey", PokemonType::FLYING, 80, {
                Move("GUST", 15),
                Move("TACKLE", 10)
                }) {
        }

        void Pidgey::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "GUST")
            {
                // 20% chance to blow the opponent away
                if (rand() % 100 < 20)
                {
                    std::cout << "... and blew the opponent away!\n";
                    N_Battle::BattleManager::stopBattle();
                    N_Utility::Utility::waitForEnter();
                }
            }
        }
    }
}