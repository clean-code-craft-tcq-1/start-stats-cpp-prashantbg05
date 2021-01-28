#include <vector>
namespace Statistics
{
    
class ComputeAVGMaxMin 
{
    public:
       int size;
    //void ComputeStatistics(float report[]);
    double Average;
   double Maximum;
   double Minimum;
    double CalculateAvg(const std::vector<double>& report);
    double CalculateMax(const std::vector<double>& report);
    double CalculateMin(const std::vector<double>& report);
};
   ComputeAVGMaxMin computedStats(const std::vector<double>& report);
}
