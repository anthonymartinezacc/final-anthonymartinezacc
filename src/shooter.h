#ifndef SHOOTER_H
#define SHOOTER_H

#include "Roll.h"
#include <vector>

class Shooter {
public:
    Roll* throw_die(Die& die1, Die& die2);
    friend std::ostream& operator<<(std::ostream& os, const Shooter& shooter);
    ~Shooter();

private:
    std::vector<Roll*> rolls;
};

#endif
