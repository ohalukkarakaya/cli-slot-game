#ifndef ANIMATE_SPIN_H
#define ANIMATE_SPIN_H

#include <random>
#include <thread>

#include "print_symbols.h"
#include "spin_slot.h"

void animate_spin(std::mt19937 &gen, int numSlots, std::chrono::system_clock::time_point startTime, int duration);

#endif //ANIMATE_SPIN_H
