#include "../include/spin_slot.h"

std::vector<std::string> spin_slot(std::mt19937 &gen, int numSlots)
{
    std::vector<std::string> slotRow(numSlots);
    std::transform(slotRow.begin(), slotRow.end(), slotRow.begin(),
                   [&](std::string) { return get_random_symbol(gen); });
    return slotRow;
}