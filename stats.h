#include <vector>
namespace Statistics
{
    
class CalMeanMaxMin  
{
    public:
       int size;

 /*   float Average;
  float Maximum;
   float Minimum;*/
    float average ;
    float max;
    float min;
    float CalculateMean(const std::vector<float>& report);
    float CalculateMax(const std::vector<float>& report);
    float CalculateMin(const std::vector<float>& report);
};
   CalMeanMaxMin ComputeStatistics(const std::vector<float>& report);
}




class IAlerter
{
};


class EmailAlert : public IAlerter
{
    public:
    bool emailSent;
};

class LEDAlert : public IAlerter
{
     public:
      bool ledGlows;
};


class statsAlerter
{
    public:
     EmailAlert emailAlert;
    LEDAlert ledAlert;
   float maxThreshold;
    std::vector<IAlerter*> alerters = {&emailAlert, &ledAlert};
    statsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters );
    void checkAndAlert(const std::vector<float>& alertvalues);
};
