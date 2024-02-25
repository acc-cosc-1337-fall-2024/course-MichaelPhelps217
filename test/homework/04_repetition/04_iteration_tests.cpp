#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify repetition code") {
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(4) == 24);
	REQUIRE(factorial(3) == 6);

	REQUIRE(gcd(15, 5) == 5);
	REQUIRE(gcd(5, 15) == 5);
}

