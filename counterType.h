#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class counterType {
private:
    int counter;

public:
    // Constructor
    // Precondition: None.
    // Postcondition: counter is initialized to 0.
    counterType();

    // Sets the counter to a specific value.
    // Precondition: value >= 0.
    // Postcondition: counter is set to the given value if nonnegative.
    void setCounter(int value);

    // Initializes counter to 0.
    // Precondition: None.
    // Postcondition: counter is set to 0.
    void initializeCounter();

    // Retrieves the value of the counter.
    // Precondition: None.
    // Postcondition: The current value of counter is returned.
    int getCounter() const;

    // Increments the counter by 1.
    // Precondition: None.
    // Postcondition: counter is incremented by 1.
    void incrementCounter();

    // Decrements the counter by 1 (if nonnegative).
    // Precondition: counter > 0.
    // Postcondition: counter is decremented by 1, but does not go below 0.
    void decrementCounter();
};

#endif
