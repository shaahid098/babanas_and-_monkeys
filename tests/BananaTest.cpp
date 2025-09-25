#define CATCH_CONFIG_MAIN

#include <fstream>        // std::fstream
#include "../Banana.h"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

TEST_CASE("Should be able to create a Banana") {
    Banana* banana = new Banana("Yellow", 90);
}

TEST_CASE("Should be able to get banana's color") {
    Banana* banana = new Banana("Red", 90);
    REQUIRE( "Red" == banana->getColor() );
}

TEST_CASE("Should be able to get banana's weight") {
    Banana* banana = new Banana("Green", 123);
    REQUIRE( 123 == banana->getWeight() );
}


TEST_CASE("Should be able to get banana's Calories") {
    Banana* banana = new Banana("Green", 123);
    REQUIRE_THAT(147.6, Catch::Matchers::WithinAbs(147.6, 0.1));
}
