#include "stats.h"
#include <iostream>

#include "catch.hpp"


/*
Stats Statistics::ComputeStatistics(const std::vector<int>& ) 
{
    //Implement statistics here
}
*/




  float Statistics::ComputeStatistics(double *values)
    {
   float mean ;
      
      mean =values[0]+values[1]+values[2]+values[3];
      computedStats.average=mean;
     
      return (mean/4);
    }

namespace App {
namespace Core {

INSTANTIATE_TEST_CASE_P(
   stats_Test__ComputeStatistics,
   stats_Test__ComputeStatistics_WithValidParam,
   ::testing::Values
   (
   
       )
