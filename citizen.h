/*
*   citizen.h
*
*   Created on: Aug 10th, 2023
*   Author: Brett Smith
*/
#include <iostream>;

#ifndef CITIZEN_H_
#define CITIZEN_H_
class citizen {
private:
    int buildingID;
    int age;
    std::string firstName;
    std::string lastName;
    std::string job;
    std::string education; //none, hs, college
public:
    citizen(int p_buildingID, int p_age, std::string p_firstName, std::string p_lastName, std::string p_job, std::string p_education);
    void setBuildingID(int newID);
    int getBuildingID();
    void setAge(int newAge);
    int getAge();
    void setFirstName(std::string newFirstName);
    std::string getFirstName();
    void setLastName(std::string newLastName);
    std::string getLastName();
    void setJob(std::string newJob);
    std::string getJob();
    void setEducation(std::string newEducation);
    std::string getEducation();

    std::string nextActivity();
};
#endif