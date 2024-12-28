#include "D:/Pokemon/include/Pokemon/Pokemons/Pikachu.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include "D:/Pokemon/include/Battle/Move/move.hpp"
#include <iostream>

#include "D:/Pokemon/include/Battle/BattleManager.hpp"
#include "D:/Pokemon/include/Utility/Utility.hpp"


namespace N_Pokemon {
    namespace N_Pokemons {

        using namespace std;

        Pikachu::Pikachu()
            : Pokemon("Pikachu", PokemonType::ELECTRIC, 100, {
                Move("THUNDER SHOCK", 20),
                Move("QUICK ATTACK", 10),
                Move("THUNDER BOLT", 80)
                }) {
        }

        void Pikachu::attack(Move selectedMove, Pokemon* target)
        {
            if (selectedMove.name == "THUNDER BOLT")
            {
                // 80% chance to hit
                if (rand() % 100 < 80)
                {
                    Pokemon::attack(selectedMove, target);
                    std::cout << "... and it hit successfully!\n";
                }
                else
                    std::cout << "... but it missed!\n";
            }
            else
                Pokemon::attack(selectedMove, target);

        }
    }
}