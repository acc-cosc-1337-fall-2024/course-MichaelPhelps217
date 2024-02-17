#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify letter grade if-else-if") {
	REQUIRE(get_letter_grade_using_if(1000) == "Invalid Number");
	REQUIRE(get_letter_grade_using_if(95) == "Your grade is A");
	REQUIRE(get_letter_grade_using_if(85) == "Your grade is B");
	REQUIRE(get_letter_grade_using_if(75) == "Your grade is C");
	REQUIRE(get_letter_grade_using_if(65) == "Your grade is D");
	REQUIRE(get_letter_grade_using_if(55) == "Your grade is F");
}

TEST_CASE("Verify letter grade switch statement") {
	REQUIRE(get_letter_grade_using_switch(1000) == "Invalid Number");
	REQUIRE(get_letter_grade_using_switch(95) == "Your grade is A");
	REQUIRE(get_letter_grade_using_switch(85) == "Your grade is B");
	REQUIRE(get_letter_grade_using_switch(75) == "Your grade is C");
	REQUIRE(get_letter_grade_using_switch(65) == "Your grade is D");
	REQUIRE(get_letter_grade_using_switch(55) == "Your grade is F");
}
