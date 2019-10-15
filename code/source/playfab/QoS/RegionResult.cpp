#include <stdafx.h>

#include <playfab/QoS/RegionResult.h>

using namespace std;

namespace PlayFab
{
    namespace QoS
    {
        RegionResult::RegionResult(std::string region, int latencyMs, int errorCode) :
            region(region), latencyMs(latencyMs), errorCode(errorCode)
        {
        }
    }
}