#include "../include/play_game.h"

void play_game(int numSlots)
{
    std::mt19937 gen(std::random_device{}());
    auto startTime = std::chrono::system_clock::now();
    animate_spin(gen, numSlots, startTime, 3);

    auto finalSlotRow = spin_slot(gen, numSlots);
    print_symbols(finalSlotRow, 0);
    std::cout << std::endl;

    if (std::all_of(finalSlotRow.begin(), finalSlotRow.end(), [&](std::string s) { return s == finalSlotRow[0]; })) {
        std::cout << "🎉 Kazandınız! 🎉\n";
    } else {
        std::cout << "😢 Kaybettiniz! Tekrar deneyin.\n";
    }
}