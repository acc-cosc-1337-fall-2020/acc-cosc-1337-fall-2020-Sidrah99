#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "C:\Users\Sidrah\Desktop\acc-cosc-1337-fall-2020-Sidrah99\inc\catch.hpp"
#include "C:\Users\Sidrah\Desktop\acc-cosc-1337-fall-2020-Sidrah99\src\homework\04_iteration\dna.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test the get_gc_content function.")
{
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}
TEST_CASE("Test the get_reverse_string function.")
{
	REQUIRE(get_reverse_string("AGCTATAG") == "GATATCGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");
}