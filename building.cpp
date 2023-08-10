//Brett Smith
//Need to add some sort of function that calculates the closeness to a store or farm
#include <string>
#include "building.h"


building::building(char* zone) {
    if(zone == "Residential") { 
        this->buildingType = "House";
    } else if(zone == "Shops") {
        this->buildingType = "Shop";
        //figure out how to set date
            //maybe a time class to keep track of and return in game time to funcs that need it
    } else {
        this->buildingType = "Farm";
    }
}

void building::checkIfRoad() {
    //will figure this out once more 'infrastructure' has been written

    //check if there is a 'road' on any side of the building and if that road is connected
            //if there is road and it is conencted to the main roads
            //then the building can start being used/populated
                //update 
}


