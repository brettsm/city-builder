//need a function to calculate how close their residence is to their home to see if they can walk there
//if they cant walk to a store, they could suffer some illnesses or something like that
class citizen {
    private:
        int buildingID;
        int age;
        char* firstName;
        char* lastName;
        char* job;
        char* education; //none, hs, college
    public:
        citizen(int buildID, int oldness, char* fname, char* lname, char* career, char* edu) {
            buildingID = buildID;
            age = oldness;
            firstName = fname;
            lastName = lname;
            job = career;
            education = edu;
        }

        void setBuildingID(int newID) {
            buildingID = newID;
        }
        int getBuildingID() {
            return buildingID;
        }
        void setAge(int newAge) {
            age = newAge;
        }
        int getAge() {
            return age;
        }
        void setFirstName(char* newFName) {
            firstName = newFName;
        }
        char* getFirstName() {
            return firstName;
        }
        void setLastName(char* newLName) {
            lastName = newLName;
        }
        char* getLastName() {
            return lastName;
        }
        void setJob(char* newJob) {
            job = newJob;
        }
        char* getJob() {
            return job;
        }
        void setEdu(char* newEdu) {
            education = newEdu;
        }
        char* getEdu() {
            return education;
        }

        char* nextActivity() {
            //use poisson distribution in stats_city.cpp to have each citizen decide what to do next
        }
};