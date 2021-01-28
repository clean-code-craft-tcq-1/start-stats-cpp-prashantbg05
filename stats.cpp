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
