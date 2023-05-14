#ifndef POINTPHASE_H
#define POINTPHASE_H

#include "Phase.h"

class PointPhase : public Phase {
public:
    PointPhase(int p);
    RollOutcome get_outcome(const Roll* roll) override;

private:
    int point;
};

#endif
