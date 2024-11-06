#include "../include/print_symbols.h"

void print_symbols(const std::vector<std::string>& symbols, size_t index)
{
    if (index >= symbols.size()) {
        std::cout << "\r";
        std::cout.flush();
        return;
    }
    std::cout << symbols[index] << " ";

    print_symbols(symbols, index + 1);
}