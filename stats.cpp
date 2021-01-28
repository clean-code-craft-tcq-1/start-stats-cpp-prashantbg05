#include "stats.h"
#include "stdio.h"
#include <iostream>
#include <math.h>
using namespace std;
using namespace Statistics;

    
ComputeAVGMaxMin Statistics::ComputeStatistics(const std::vector<double>& report)
{
    //Implement statistics here
    
    ComputeAVGMaxMin statreport;
    statreport.Average = 0;
    statreport.Maximum = 0;
    statreport.Minimum = 0;
    
    if(!(report.empty()))
    {
        statreport.Average = statreport.CalculateAvg(report);
        statreport.Maximum = statreport.CalculateMax(report);
        statreport.Minimum = statreport.CalculateMin(report);
    }
    else
    {
        statreport.Average = NAN;
        statreport.Maximum = NAN;
        statreport.Minimum = NAN;
    }
  
    return statreport;
} 
double ComputeAVGMaxMin::CalculateAvg(const std::vector<double>& report)
{
    double  sum = 0;
    double  Avg = 0;
   
    for(int i=0;i<report.size();i++)
    {
        sum = sum + report[i];
      
    }
    Avg = sum/report.size();

    return Avg;
}

double ComputeAVGMaxMin::CalculateMax(const std::vector<double>& report)
{
    double  Max = report[0];
    for(int i=1;i<report.size();i++)
    {
       if(Max < report[i])
       {
          Max =  report[i];
       }
    }
   
    return Max;
}

double ComputeAVGMaxMin::CalculateMin(const std::vector<double>& report)
{
     double  Min = report[0];
    for(int i=1;i<report.size();i++)
    {
       if(Min > report[i])
       {
          Min =  report[i];
       }
    }
   
    return Min;
}
void statsAlerter::checkAndAlert(const std::vector<double>& alertvalues)
{
    ComputeAVGMaxMin statreport;
   statsAlerter checkstatsAlerter;
    
    EmailAlert checkEmailAlert;
    LEDAlert checkLEDAlert;
    double max = 0;
    max = statreport.CalculateMax(alertvalues);
    if(max > checkstatsAlerter.maxThreshold )
    {
        checkEmailAlert.emailSent = true;
        checkLEDAlert.ledGlows = true;
    }
cout<<checkEmailAlert.emailSent<<endl;
    cout<<checkLEDAlert.ledGlows<<endl;

}
