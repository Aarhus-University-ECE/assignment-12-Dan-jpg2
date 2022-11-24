#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C++"{
    #include "duration.hpp"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file. 

TEST_CASE("Duration is initialized to 0") {
    
    Duration d;
    REQUIRE(d.GetDuration() == 0);
    d.~Duration();
    
    d = Duration(5);
    REQUIRE(d.GetDuration() == 5);
    d.~Duration();

   // d.resetTime();
    //REQUIRE(d.getDuration() == 0);

    d = Duration();
    d.tick();
    REQUIRE(d.GetDuration() == 1);

    d.tick(3);
    REQUIRE(d.GetDuration() == 4);

    //testcase where alarm is 1 second away.
    d.SetAlarm(5);
    REQUIRE(d.tick() == false);

    REQUIRE(d.tick() == true);

    d.SetAlarm(100);
    REQUIRE(d.tick() == false);
    
}
