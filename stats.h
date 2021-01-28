#include <vector>
namespace Statistics
{
    
		class CalMeanMaxMin 
		{
				public:
				int size;
				
				float Mean;
				float MaxVal;
				float MinVal;
				float CalculateMean(const std::vector<float>& VecItem);
				float CalculateMax(const std::vector<float>& VecItem);
				float CalculateMin(const std::vector<float>& VecItem);
		};
		
		
		CalMeanMaxMin ComputeStatistics(const std::vector<float>& VecItem);
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
    //statsAlerter(maxThreshold, alerters);
    statsAlerter(const float maxThreshold, std::vector<IAlerter*> alerters );
    void checkAndAlert(const std::vector<float>& alertvalues);
};
