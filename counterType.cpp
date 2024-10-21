#include "counterType.h"
#include <iostream>

// Constructor: Initializes counter to 0
counterType::counterType() {
    counter = 0;
}

// Sets the counter to a specific value (if nonnegative)
void counterType::setCounter(int value) {
    if (value >= 0) {
        counter = value;
    } else {
        std::cout << "Counter value must be nonnegative!" << std::endl;
    }
}

// Resets the counter to 0
void counterType::initializeCounter() {
    counter = 0;
}

// Retrieves the value of the counter
int counterType::getCounter() const {
    return counter;
}

// Increments the counter by 1
void counterType::incrementCounter() {
    counter++;
}

// Decrements the counter by 1, ensuring it does not go below 0
void counterType::decrementCounter() {
    if (counter > 0) {
        counter--;
    } else {
        std::cout << "Counter is already at 0, cannot decrement!" << std::endl;
    }
}

   