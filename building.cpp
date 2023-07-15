#include <string>

class building {
    private:
        int numResidents;
        int numEmptyRes;
        int dateBuilt;
        int price;
        char* buildingType;
        bool nearRoad = false;
        
    //     //probably need something to hold the image that will be dislpayed
    public:
        building(char* zone) {
            if(zone == "Residential") {
                //some sort of thing to decide if the residential is high density or low density housing
                    //maybe there should be another function for this? (Probably not)

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