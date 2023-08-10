/*
*   building.h
*   
*   Created on: Aug 10th
*   Author: Brett Smith
*/
#include <iostream>

#ifndef BUILDING_H_
#define BUILDING_H_
class building {
private:
    int numResidents;
    int numEmptyUnits;
    int dateBuilt;
    float price;
    std::string buildingType;
    bool nearRoad;
    int buildingID;
public:
    building(char* zone);
    virtual ~building();
    void checkIfRoad();
};
#endif