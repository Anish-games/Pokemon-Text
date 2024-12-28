#pragma once
#include <string>
#include "D:\Pokemon\include\Pokemon\Pokemon.hpp"
namespace N_Character
{
    namespace N_Player
    {
        using namespace std;
        using namespace N_Pokemon;

        class Player {
        public:
            string name;
            Pokemon* chosenPokemon;

            Player(); // Default constructor
            Player(string p_name); // Parameterized constructor

            void choosePokemon(int choice); // Method to choose a Pokemon
        };
    }
}