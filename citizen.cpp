/*
*   citizen.cpp
*
*   Created on: June 30th
*   Author: Brett Smith
*/
#include "citizen.h"

citizen::citizen(int p_buildingID, int p_age, std::string p_firstName, std::string p_lastName, std::string p_job, std::string p_education) {
    this->buildingID = p_buildingID;
    this->age = p_age;
    this->firstName = p_firstName;
    this->lastName = p_lastName;
    this->job = p_job;
    this->education = p_education;
}

void citizen::setBuildingID(int newID) {
    this->buildingID = newID;
}
int citizen::getBuildingID() {
    return this->buildingID;
}

void citizen::setAge(int newAge) {
    this->age = newAge;
}
int citizen::getAge() {
    return this->age;
}

void citizen::setFirstName(std::string newFirstName) {
    this->firstName = newFirstName;
}
std::string citizen::getFirstName() {
    return this->firstName;
}

void citizen::setLastName(std::string newLastName) {
    this->lastName = newLastName;
}
std::string citizen::getLastName() {
    return this->lastName;
}

void citizen::setJob(std::string newJob) {
    this->job = newJob;
}
std::string citizen::getJob() {
    return this->job;
}

void citizen::setEducation(std::string newEducation) {
    this->education = newEducation;
}
std::string citizen::getEducation() {
    return this->education;
}

std::string nextActivity() {
    //use stats_city to decide citizens next activity
}


//need a function to calculate how close their residence is to their home to see if they can walk there
//if they cant walk to a store, they could suffer some illnesses or something like that
