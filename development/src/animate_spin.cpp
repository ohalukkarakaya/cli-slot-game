#include "../include/animate_spin.h"

void animate_spin(std::mt19937 &gen, int numSlots, std::chrono::system_clock::time_point startTime, int duration)
{
    if (std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now() - startTime).count() >= duration)
    {
        return;
    }

    auto slotRow = spin_slot(gen, numSlots);
    print_symbols(slotRow, 0);
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::milliseconds(200));

    animate_spin(gen, numSlots, startTime, duration);
}