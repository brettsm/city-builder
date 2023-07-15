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
};