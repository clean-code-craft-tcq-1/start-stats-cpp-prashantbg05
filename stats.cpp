#include "stats.h"
#include <iostream>

#include "catch.hpp"


/*
Stats Statistics::ComputeStatistics(const std::vector<int>& ) 
{
    //Implement statistics here
}
*/




  float Statistics::ComputeStatistics(float x, float y, float z, float w)
    {
   float mean ;
      
      mean =x+y+z+w;
      
      return (mean/4);
    }
