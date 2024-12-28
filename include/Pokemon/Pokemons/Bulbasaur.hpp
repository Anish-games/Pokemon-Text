#pragma once
#include "D:/Pokemon/include/Pokemon/Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Bulbasaur : public Pokemon {
        public:
            Bulbasaur();
            void attack(Move selectedMove, Pokemon* target) override;
        };

    }
}