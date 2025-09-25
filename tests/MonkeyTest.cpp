#define CATCH_CONFIG_MAIN

#include <fstream>        // std::fstream
#include "../Monkey.h"
#include "../Banana.h"

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>

TEST_CASE("Should be able to create a Monkey") {
 Monkey* monkey = new Monkey("Clyde");
}

TEST_CASE("Should be able to get the Monkey's Name") {
    Monkey* monkey = new Monkey("Clyde");
    REQUIRE_THAT("Clyde", Catch::Matchers::Equals(monkey->getName()));
}


TEST_CASE("Should be able to change the Monkey's Name") {
    Monkey* monkey = new Monkey("Clyde");
    monkey->setName("Rafiki");
    REQUIRE_THAT("Rafiki", Catch::Matchers::Equals(monkey->getName()));
}

TEST_CASE("Should start with 500 Energy") {
    Monkey* monkey = new Monkey("Clyde");
    REQUIRE(500 == monkey->getEnergy());
}


TEST_CASE("Swinging in the trees should lower energy") {
    Monkey* monkey = new Monkey("Clyde");
    monkey->swingFromTrees();
    REQUIRE(500 > monkey->getEnergy());

}

TEST_CASE("Should not start out hungry") {
    Monkey* monkey = new Monkey("Clyde");
    REQUIRE_FALSE(monkey->isHungry());
}

TEST_CASE("Swinging from the trees 3 time should make the monkey hungry") {
    Monkey* monkey = new Monkey("Clyde");
    monkey->swingFromTrees();
    monkey->swingFromTrees();
    monkey->swingFromTrees();
    REQUIRE(monkey->isHungry());
}

TEST_CASE("Eating a yellow banana should raise energy") {
    Monkey* monkey = new Monkey("Clyde");
    Banana* banana = new Banana("Yellow", 50);
    monkey->giveBanana(banana);
    REQUIRE(500 < monkey->getEnergy());
}




