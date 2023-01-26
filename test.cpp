#define CATCH_CONFIG_MAIN

#include <vector>
#include "functions_to_implement.cpp"
#include "catch.hpp"
// #define CATCH_CONFIG_MAIN

TEST_CASE ("Sums are computed", "[sum]" ) {
    std::vector<int> nums = {1,2,3,4};

    SECTION( "calculating sum" ) {
        REQUIRE( Sum(nums) == 10);
    }
}

TEST_CASE ("Products are computed", "[product]" ) {
    std::vector<int> nums = {1,2,3,4};
    SECTION( "calculating product" ) {
        REQUIRE( Product(nums) == 24);
    }
}

TEST_CASE ("Vector plus n is computed computed", "[product]" ) {
    std::vector<int> nums = {1,2,3,4};
    SECTION( "adding n to vector" ) {
        nums = VectorPlusN(nums, 2);
        REQUIRE(nums.at(0) == 3);
    }
}