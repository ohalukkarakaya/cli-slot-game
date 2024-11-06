#include "../include/get_random_symbol.h"

std::string get_random_symbol(std::mt19937 &gen)
{
    std::uniform_int_distribution<> distr(0, symbols.size() - 1);
    return symbols[distr(gen)];
}
