#include "stats.h"
#include "stdio.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace Statistics;

    
CalMeanMaxMin Statistics::ComputeStatistics(const std::vector<float>& VecItem)
{
    //Implement statistics here
    
    CalMeanMaxMin VecData;
    VecData.Mean = 0;
    VecData.MaxVal = 0;
    VecData.MinVal = 0;
    
  
        VecData.Mean   = VecData.CalculateMean(VecItem);
        VecData.MaxVal = VecData.CalculateMax(VecItem);
        VecData.MinVal = VecData.CalculateMin(VecItem);
  
  
    return VecData;
} 
float CalMeanMaxMin::CalculateMean(const std::vector<float>& VecItem)
{
    float  sum = 0;
    float  Mean = 0;
   
    for(int i=0;i<VecItem.size();i++)
    {
        sum = sum + VecItem[i];
      
    }
    Mean = sum/VecItem.size();

    return Mean;
}

float CalMeanMaxMin::CalculateMax(const std::vector<float>& VecItem)
{
  /*   float  Max = VecItem[0];
	float  Min = VecItem[0];
    for(int i=1;i<VecItem.size();i++)
    {
       if(Max < VecItem[i])
       {
          Max =  VecItem[i];
       }
    }
	 */
	
	
	 if (VecItem[0] > VecItem[1]) 
    {
        Max = VecItem[0];
        Min = VecItem[1];
    } 
    else
    {
        Max = VecItem[1];
        Min = VecItem[0];
    } 
     
    for(i = 2; i < VecItem.size(); i++)
    {
        if (VecItem[i] > Max)     
            Max = VecItem[i];
             
      /*   else if (VecItem[i] < Min)     
            Min = VecItem[i]; */
    }
	
	
   
    return Max;
}

float CalMeanMaxMin::CalculateMin(const std::vector<float>& VecItem)
{
/*      float  Min = VecItem[0];
    for(int i=1;i<VecItem.size();i++)
    {
       if(Min > VecItem[i])
       {
          Min =  VecItem[i];
       }
    }
    */
	
		 if (VecItem[0] > VecItem[1]) 
    {
        Max = VecItem[0];
        Min = VecItem[1];
    } 
    else
    {
        Max = VecItem[1];
        Min = VecItem[0];
    } 
     
    for(i = 2; i < VecItem.size(); i++)
    {
        /* if (VecItem[i] > Max)     
            Max = VecItem[i]; */
             
        else if (VecItem[i] < Min)     
            Min = VecItem[i]; 
    }
	
	
    return Min;
}
