#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include "catch.hpp"
#include "stats.h"
#include <cmath>
using namespace std;
using namespace Statistics;

struct computedStatsData
{
    float Average;
    float Maximum;
    float Minimum;
    
    string straverage;
    string strmax;
    string strmin;
}computedStats;

//Statistics obj;
//float myarray[4] = {1.5, 8.9, 3.2, 4.5};
TEST_CASE("reports Average, Minimum and Maximum") {
    auto computedStats = Statistics::ComputeStatistics({1.5, 8.9, 3.2, 4.5});
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.Average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.Maximum - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.Minimum - 1.5) < epsilon);
}

TEST_CASE("Average is NaN for empty array") {
    auto computedStats = Statistics::ComputeStatistics({});
    REQUIRE(std::isnan(computedStats.Average ) == true);
    REQUIRE(std::isnan(computedStats.Maximum )  == true);
    REQUIRE(std::isnan(computedStats.Minimum )  == true);
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    
    //Design the REQUIRE statement here.
    //Use http://www.cplusplus.com/reference/cmatAverage/
}
/*
TEST_CASE("raises alerts when max is greater than threshold") {
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    //std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    statsAlerter statsAlerterobj;
    const float maxThreshold = 10.2;
   // StatsAlerter statsAlerter(maxThreshold, alerters);
    statsAlerterobj.checkAndAlert({99.8, 34.2, 4.5, 6.7});
cout<<emailAlert.emailSent<<endl;
    cout<<ledAlert.ledGlows<<endl;
    REQUIRE(emailAlert.emailSent);
    REQUIRE(ledAlert.ledGlows);*/
}
