#pragma once
#include "D:/Pokemon/include/Pokemon/Pokemon.hpp"


namespace N_Pokemon {
    namespace N_Pokemons {

        class Squirtle : public Pokemon {
        public:
            Squirtle();
            void attack(Move selectedMove, Pokemon* target) override;
        };

    }
}