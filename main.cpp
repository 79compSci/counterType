#include "counterType.h"
#include <iostream>

int main() {
    // Testing default constructor
    counterType counter1;
    std::cout << "Initial value of counter1 (default constructor): " << counter1.getCounter() << std::endl;

    // Testing user-supplied parameter
    counterType counter2;
    counter2.setCounter(5);
    std::cout << "Value of counter2 after setting to 5: " << counter2.getCounter() << std::endl;

    // Testing increment operation
    counter2.incrementCounter();
    std::cout << "Value of counter2 after increment: " << counter2.getCounter() << std::endl;

    // Testing decrement operation
    counter2.decrementCounter();
    std::cout << "Value of counter2 after decrement: " << counter2.getCounter() << std::endl;

    // Testing reset operation
    counter2.initializeCounter();
    std::cout << "Value of counter2 after reset: " << counter2.getCounter() << std::endl;

    // Testing decrement operation after reset
    counter2.decrementCounter();
    std::cout << "Value of counter2 after attempting to decrement when at 0: " << counter2.getCounter() << std::endl;

    // Testing setting the counter to 10
    counter2.setCounter(10);
    std::cout << "Value of counter2 after setting to 10: " << counter2.getCounter() << std::endl;

    return 0;
}
