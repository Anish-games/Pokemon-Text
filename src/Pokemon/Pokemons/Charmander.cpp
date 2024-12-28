#include "D:/Pokemon/include/Pokemon/Pokemons/Charmander.hpp"
#include "D:/Pokemon/include/Pokemon/PokemonType.hpp"
#include "D:/Pokemon/include/Battle/Move/move.hpp"
#include <iostream>

#include "D:/Pokemon/include\/Utility/Utility.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Charmander::Charmander()
            : Pokemon("Charmander", PokemonType::FIRE, 95, {
                Move("EMBER", 20),
                Move("SCRATCH", 15),
                Move("BLAZING CHARGE", 70)
                }) {
        }

        void Charmander::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

            if (selectedMove.name == "BLAZING CHARGE")
            {
                // Recoil effect: Charmander takes recoil damage
                this->takeDamage(10); // Fixed recoil damage
                std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::waitForEnter();
            }
        }

    }
}