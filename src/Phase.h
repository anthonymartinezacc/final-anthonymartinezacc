#ifndef PHASE_H
#define PHASE_H

enum class RollOutcome { natural, craps, point, seven_out, nopoint };

class Phase {
public:
    virtual RollOutcome get_outcome(const Roll* roll) = 0;
};

#endif
