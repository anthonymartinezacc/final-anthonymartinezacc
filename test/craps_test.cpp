#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Die.h"
#include "Roll.h"
#include "Shooter.h"
#include "ComeOutPhase.h"
#include "PointPhase.h"
//#include "Die.cpp"
//#include "Roll.cpp"
//#include "Shooter.cpp"
//#include "ComeOutPhase.cpp"
//#include "PointPhase.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify ComeOutPhase get outcomes", "verification") {
    Die die1;
    Die die2;
    Roll* roll = new Roll(die1, die2);

    roll->set_roll_value(7);
    REQUIRE(roll->roll_value() == 7);

    roll->set_roll_value(11);
    REQUIRE(roll->roll_value() == 11);

    roll->set_roll_value(2);
    REQUIRE(roll->roll_value() == 2);

    roll->set_roll_value(3);
    REQUIRE(roll->roll_value() == 3);

    roll->set_roll_value(12);
    REQUIRE(roll->roll_value() == 12);

    roll->set_roll_value(5);
    REQUIRE(roll->roll_value() == 5);

    delete roll;
}

TEST_CASE("Verify PointPhase get outcomes", "verification") {
    Die die1;
    Die die2;
    Roll* roll = new Roll(die1, die2);

    roll->set_roll_value(8);
    REQUIRE(roll->roll_value() == 8);

    roll->set_roll_value(7);
    REQUIRE(roll->roll_value() == 7);

    roll->set_roll_value(5);
    REQUIRE(roll->roll_value() == 5);

    delete roll;
}
