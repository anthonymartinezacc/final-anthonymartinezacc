#ifndef ROLL_H
#define ROLL_H

#include "Die.h"

class Roll {
public:
    Roll(Die& die1, Die& die2);
    void roll_die();
    int roll_value() const;
    void set_roll_value(int value);

private:
    Die& die1;
    Die& die2;
    bool rolled;
    int value;
};

#endif
