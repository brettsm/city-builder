#include <random>
#include "stats_city.h"
//building distribution:
    //  Residential:
    //      80% high density
    //      20% low density
    //  Shops: (could find a way later to decide by necessity in area)
    //      40% Food Stores
    //          20% Butcher
    //          80% Produce Stand
    //      10% Alternative Medicine Stores (potions, herbs, crystals etc.)
    //      20% General Goods Store (hardware, etc)
    //      20% Book Store
    //      10% Spell Store (wizard)
    //  Farm:
    //      10% Apple Tree Farm
    //      30% Potato Farm
    //      20% Corn Farm
    //      40% Wheat Farm

stats_city::stats_city() {
    //TODO finish constructor
}
std::string stats_city::chooseBuildingResidential() {
    float randFloat = 0; //randomFloatFunction in C++
    if(randFloat <= .2) {
        return "low";
    } else {
        return "high";
    }
}

std::string stats_city::chooseBuildingShop() {
    float randFloat = 0;
    if(randFloat <= .1) {
        return "medicine";
    } else if(randFloat <= .2) {
        return "spell";
    } else if(randFloat <= .4) {
        return "general";
    } else if(randFloat <= .6) {
        return "book";
    } else {
        randFloat = 0;
        if(randFloat <= .2) {
            return "butcher";
        } else {
            return "produce";
        }
    }
}

std::string stats_city::chooseBuildingFarm() {
    float randFloat = 0;
    if(randFloat <= .1) {
        return "apple";
    } else if(randFloat <= .3) {
        return "corn";
    } else if(randFloat <= .6) {
        return "potato";
    } else {
        return "wheat";
    }
}

float stats_city::getNextExponential() {
    float x;
    if(x == 0.0) {
        return 0.0;
    } else if(x <= 0.1) {
        return ((x - 0.00) * 1.04 + 0.0);
    } else if(x <= 0.2) {
        return ((x - 0.10) * 1.18 + 0.104);
    } else if(x <= 0.3) {
        return ((x - 0.20) * 1.33 + 0.222);
    } else if(x <= 0.4) {
        return ((x - 0.30) * 1.54 + 0.355);
    } else if(x <= 0.5) {
        return ((x - 0.40) * 1.81 + 0.509);
    } else if(x <= 0.6) {
        return ((x - 0.50) * 2.25 + 0.690);
    } else if(x <= 0.7) {
        return ((x - 0.60) * 2.85 + 0.915);
    } else if(x <= 0.75) {
        return ((x - 0.70) * 3.60 + 1.20);
    } else if(x <= 0.80) {
        return ((x - 0.75) * 4.40 + 1.38);
    } else if(x <= 0.84) {
        return ((x - 0.80) * 5.57 + 1.60);
    } else if(x <= 0.88) {
        return ((x - 0.84) * 7.25 + 1.83);
    } else if(x <= 0.90) {
        return ((x - 0.88) * 9.00 + 2.12);
    } else if(x <= 0.92) {
        return ((x - 0.90) * 11.0 + 2.30);
    } else if(x <= 0.94) {
        return ((x - 0.92) * 14.5 + 2.52);
    } else if(x <= 0.95) {
        return ((x - 0.94) * 18.0 + 2.81);
    } else if(x <= 0.96) {
        return ((x - 0.95) * 30.0 + 2.99);
    } else if(x <= 0.97) {
        return ((x - 0.96) * 30.0 + 3.20);
    } else if(x <= 0.98) {
        return ((x - 0.97) * 40.0 + 3.50);
    } else if(x <= 0.99) {
        return ((x - 0.98) * 70.0 + 3.90);
    } else if(x <= 0.995) {
        return ((x - 0.99) * 140.0 + 4.60);
    } else if(x <= 0.998) {
        return ((x - 0.995) * 300.0 + 5.30);
    } else if(x <= 0.999) {
        return ((x - 0.998) * 800.0 + 6.20);
    } else {
        return ((x - 0.9997) * 1000.0 + 8.0);
    }
}