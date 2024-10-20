#include <iostream>
using namespace std;

class counterType {
private:
    int counter;

public:
    // Constructor to initialize counter to 0
    counterType() {
        counter = 0;
    }

    // Function to set counter to a specified value
    void setCounter(int value) {
        if (value >= 0) {
            counter = value;
        } else {
            cout << "Counter value cannot be negative." << endl;
        }
    }

    // Function to initialize counter to 0
    void initializeCounter() {
        counter = 0;
    }

    // Function to retrieve the value of counter
    int getCounter() const {
        return counter;
    }

    // Function to increment counter by 1
    void incrementCounter() {
        counter++;
    }

    // Function to decrement counter by 1, ensuring it's nonnegative
    void decrementCounter() {
        if (counter > 0) {
            counter--;
        } else {
            cout << "Counter value cannot be negative." << endl;
        }
    }
};

int main() {
    counterType myCounter;

    // Testing the counter
    myCounter.setCounter(5);
    cout << "Counter: " << myCounter.getCounter() << endl;

    myCounter.incrementCounter();
    cout << "After increment: " << myCounter.getCounter() << endl;

    myCounter.decrementCounter();
    cout << "After decrement: " << myCounter.getCounter() << endl;

    myCounter.decrementCounter();
    myCounter.decrementCounter();
    myCounter.decrementCounter();
    myCounter.decrementCounter();
    myCounter.decrementCounter(); // Should show message that counter can't be negative

    return 0;
}
