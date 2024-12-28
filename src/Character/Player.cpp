#pragma once
#include "D:\Pokemon\include\Character\Player.hpp"
#include "D:\Pokemon\include\Pokemon\PokemonChoice.hpp"
#include "D:\Pokemon\include\Pokemon\PokemonType.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemons\Pikachu.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemons\Bulbasaur.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemons\Charmander.hpp"
#include "D:\Pokemon\include\Pokemon\Pokemons\Squirtle.hpp"
#include "D:\Pokemon\include\Utility\Utility.hpp"
#include "iostream"

namespace N_Character
{
    namespace N_Player
    {
        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        Player::Player() {
            name = "Trainer";
        }

        Player::Player(std::string p_name) {
            name = p_name;
        }

        void Player::choosePokemon(int choice) {
            switch ((PokemonChoice)choice) {
            case PokemonChoice::CHARMANDER:
                chosenPokemon = new Charmander();
                break;
            case PokemonChoice::BULBASAUR:
                chosenPokemon = new Bulbasaur();
                break;
            case PokemonChoice::SQUIRTLE:
                chosenPokemon = new Squirtle();
                break;
            default:
                chosenPokemon = new Pikachu();
                break;
            }
            std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
            Utility::waitForEnter(); // Wait for user to press Enter before
            // proceeding
        }
    }
}