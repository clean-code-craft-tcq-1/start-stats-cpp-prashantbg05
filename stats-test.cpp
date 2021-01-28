#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include "catch.hpp"
#include "stats.h"
#include <cmath>
using namespace std;
using namespace Statistics;
typedef const std::vector<double>&report computedStats;
//Statistics obj;
//float myarray[4] = {1.5, 8.9, 3.2, 4.5};
TEST_CASE("reports average, minimum and maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.Average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.Maximum - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.Minimum - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
    auto computedStats = Statistics::ComputeStatistics({});
    REQUIRE(std::isnan(computedStats.Average ) == true);
    REQUIRE(std::isnan(computedStats.Maximum )  == true);
    REQUIRE(std::isnan(computedStats.Minimum )  == true);
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    
    //Design the REQUIRE statement here.
    //Use http://www.cplusplus.com/reference/cmatAverage/
}
