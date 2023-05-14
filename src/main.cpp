#include <iostream>
#include "Die.h"
#include "Roll.h"
#include "Shooter.h"
#include "ComeOutPhase.h"
#include "PointPhase.h"
#include "Die.cpp"
#include "Roll.cpp"
#include "Shooter.cpp"
#include "ComeOutPhase.cpp"
#include "PointPhase.cpp"

int main() {
    srand(time(0));

    Die die1;
    Die die2;
    Shooter shooter;

    Roll* roll = shooter.throw_die(die1, die2);

    ComeOutPhase come_out_phase;
    RollOutcome outcome = come_out_phase.get_outcome(roll);

    while (outcome == RollOutcome::natural || outcome == RollOutcome::craps) {
        std::cout << "Rolled " << roll->roll_value() << " roll again" << std::endl;
        roll = shooter.throw_die(die1, die2);
        outcome = come_out_phase.get_outcome(roll);
    }

    std::cout << "Rolled " << roll->roll_value() << " start of point phase" << std::endl;
    std::cout << "Roll until " << roll->roll_value() << " or a 7 is rolled" << std::endl;

    int point = roll->roll_value();
    roll = shooter.throw_die(die1, die2);

    PointPhase point_phase(point);
    outcome = point_phase.get_outcome(roll);

    while (outcome != RollOutcome::point && outcome != RollOutcome::seven_out) {
        std::cout << "Rolled " << roll->roll_value() << " roll again" << std::endl;
        roll = shooter.throw_die(die1, die2);
        outcome = point_phase.get_outcome(roll);
    }

    std::cout << "Rolled " << roll->roll_value() << " end of point phase" << std::endl;

    std::cout << shooter;

    return 0;
}
