#include "ComeOutPhase.h"

RollOutcome ComeOutPhase::get_outcome(const Roll* roll) {
    int rollValue = roll->roll_value();
    if (rollValue == 7 || rollValue == 11) {
        return RollOutcome::natural;
    } else if (rollValue == 2 || rollValue == 3 || rollValue == 12) {
        return RollOutcome::craps;
    } else {
        return RollOutcome::point;
    }
}

