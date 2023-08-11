#include <iostream>

#ifndef STATS_CITY_H_
#define STATS_CITY_H_
class stats_city {
public:
    std::string chooseBuildingResidential();
    std::string chooseBuildingShop();
    std::string chooseBuildingFarm();
    float getNextExponential();
};
#endif