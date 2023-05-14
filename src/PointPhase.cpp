#include "PointPhase.h"

PointPhase::PointPhase(int p) : point(p) {}

RollOutcome PointPhase::get_outcome(const Roll* roll) {
    int rollValue = roll->roll_value();
    if (rollValue == point) {
        return RollOutcome::point;
    } else if (rollValue == 7) {
        return RollOutcome::seven_out;
    } else {
        return RollOutcome::nopoint;
    }
}
