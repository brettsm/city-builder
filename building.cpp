//Brett Smith
//Need to add some sort of function that calculates the closeness to a store or farm
#include <string>

class building {
    private:
        int numResidents;
        int numEmptyRes;
        int dateBuilt;
        int price;
        char* buildingType;
        bool nearRoad = false;
        int buildingID;
        //call constructor for stats_city.cpp
        
    //     //probably need something to hold the image that will be dislpayed
    public:
        building(char* zone) {

            buildingType = stats_city.dothing;
            if(zone == "Residential") {
                

            } else if(zone == "Shops") {
                buildingType = "Shop";
                //figure out how to set date
                    //maybe a time class to keep track of and return in game time to funcs that need it
            } else {
                buildingType = "Farm";
            }
        }
        void checkIfRoad() {
            //check if there is a 'road' on any side of the building and if that road is connected
            //if there is road and it is conencted to the main roads
            //then the building can start being used/populated
                //update 

            //if there 
        }
};