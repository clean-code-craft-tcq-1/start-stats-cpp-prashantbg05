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
    VecData.clear();
  
   
        VecData.Mean   = VecData.CalculateMean(VecItem);
        VecData.MaxVal = VecData.CalculateMax(VecItem);
        VecData.MinVal = VecData.CalculateMin(VecItem);
  
  
    if (VecData.Mean==0)
    {
        VecData.Mean = NAN;
        VecData.MaxVal = NAN;
        VecData.MinVal = NAN;
    }
  
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

void statsAlerter::checkAndAlert(const std::vector<float>& alertvalues)
{
    CalMeanMaxMin VecData;
   statsAlerter checkstatsAlerter;
    
    EmailAlert checkEmailAlert;
    LEDAlert checkLEDAlert;
    float max = 0;
    max = VecData.CalculateMax(alertvalues);
    if(max > checkstatsAlerter.maxThreshold )
    {
        checkEmailAlert.emailSent = true;
        checkLEDAlert.ledGlows = true;
    }
cout<<checkEmailAlert.emailSent<<endl;
    cout<<checkLEDAlert.ledGlows<<endl;

}
