#include "catch.hpp"

unsigned int AdderOfTwo( unsigned int number ) {
    return number +2;
}

TEST_CASE( "Adding two", "[adder]" ) {
    REQUIRE( AdderOfTwo(1u) == 3u );
}
