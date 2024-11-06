# Slot Machine - Functional Programming in C++

This project is a command-line slot machine game developed in C++ with real-time animation. It is designed according to functional programming principles, using recursion instead of loops. The game displays spinning slot symbols in the terminal and ends with a message indicating whether you have won or lost.

## Features

- Real-time slot machine animation for an engaging terminal experience.
- Functional programming principles are applied, using recursive structures to avoid loops.
- Enjoyable user experience with emoji symbols.
- Written with a Haskell-inspired approach in C++.

## Technologies Used

- **C++**: The primary programming language.
- **Functional Programming Principles**: Completely recursive structures are used to eliminate loops.
- **ANSI Emojis**: Symbols displayed in the terminal for a visual experience.

## Installation and Execution

### Requirements

- C++17 or newer.
- A C++ compiler (e.g., g++ or clang++).

### Compile and Run
You can compile and run the project with the following commands:
```bash
mkdir build && cd build && cmake .. && make
./slot
```

## Code Overview

### Functional Programming Structure

This project is built to adhere to functional programming paradigms. All iterations are achieved with recursive functions instead of loops:

- **`animate_spin`**: Recursively runs the slot machine animation until the specified time is reached, creating a spinning slot effect in the terminal.
- **`print_symbols`**: Displays slot symbols in the terminal without using a loop, ensuring each symbol is printed recursively.
- **`spin_slot`**: Generates random symbols for each slot row, operating as a pure function independent of outside effects.

### Functions

- **`get_random_symbol`**: Returns a random slot symbol.
- **`spin_slot`**: Generates the desired number of random symbols to create a slot row.
- **`animate_spin`**: Recursively runs the slot animation.
- **`print_symbols`**: Prints symbols to the terminal one by one recursively.
- **`play_game`**: Starts the game, runs the animation, and displays the result.

## Sample Run

For example, setting the number of slots to `4`, you will see the spinning symbols in the terminal, followed by a message indicating if you've won or lost:
```bash
🍇 🔔 🍋 🔔 
😢 Kaybettiniz! Tekrar deneyin.
```

## Developer Notes

This project is an example of how to build a game in C++ using functional programming principles. It avoids loops and uses recursion to achieve a functional approach. This project is a helpful learning tool for developers interested in applying functional programming concepts in C++.
