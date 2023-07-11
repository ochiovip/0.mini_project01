//student.h
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string id;
        string prefixname;
        string fname;
        string lname;
        string datecard;
        string expiredate;
        string faculty;
    public:
        Student();
        string getId();
        void setId(string id);
        string getPrefixName();
        void setPrefixName(string prefixName);
        string getFname();
        void setFname(string fname);
        string getLname();
        void setLname(string lname);
        string getDatecard();
	    void setDatecard(string datecard);
        string getExpiredate(); 
	    void setExpiredate(string expiredate);
	    string getFaculty();
	    void setFaculty(string faculty);
        
        
    };


