#ifndef COUNTER_H
#define COUNTER_H
// used to avoid multiple definitions
//not part of the class
class counter
{
public:
// Member Functions
// Constructors
counter();
counter(int);
// Increment counter
void increment();
// Decrement counter
void decrement();
// Set counter value
void setCount(int);
// Set maximum counter value.
void setMaxValue(int);
// Return current counter value
int getCount() const;
// Return maximum counter value
int getMaxValue() const;
private:
// Data members (attributes)
int count;
int maxValue;
}; // Note — a class definition MUST end with a semicolon
#endif // COUNTER_H

