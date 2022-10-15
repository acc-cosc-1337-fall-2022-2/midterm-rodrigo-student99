#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify the get_cookie_ingredients function")
{
	REQUIRE(get_cookie_ingredients(48)  == vector<double> {1.5, 1, 2.75});
	REQUIRE(get_cookie_ingredients(96)  == vector<double> {3, 2, 5.5});
	REQUIRE(get_cookie_ingredients(24)  == vector<double> {.75, .5, 1.375});
}