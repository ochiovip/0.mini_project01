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
        Student(){
        
		}
        string getId(){
        	return getId;
		}
        void setId(string id){
        	Id=id;
		}
        string getPrefixName(){
        	return getPrefixName;
		}
        void setPrefixName(string prefixName){
        	PrefixName=prefixName;
		}
        string getFname(){
        	return getFname;
		}
        void setFname(string fname){
        	Fname=fname;
		}
        string getLname(){
        	return getLname;
        	
		}
        void setLname(string lname){
        	Lname=lname;
		}
        void setDatecard(string datecard){
        	Datecard=datecard;
		}
        void setExpiredate(string expiredate){
        	Expiredate=expiredate;
		}
        string getDatecard(){
        	return getDatecard;
		}
        string getExpiredate(){
        	return getExpiredate;
		}
    };
    class ArrayList{
    private:
        int capacity;
        int count;
        Student* array;
    public:
    ArrayList(int size){
   	arry = new int[size];
	capacity = size;
	count = 0;
	}
    ~ArrayList(){
    	delete [] arry;
    	
	}
    void add(Student value){
    	if(isFull()){
		cout << "ArrayList is Full." << endl;
	}else{
		arry[count] = value;
		count++;
	}
    	
	}
    void set(string id,string prefix,string fname,string lname,string faculty){
    	arry[count] = value;
    	
	}
    void Search(string id){
    	
	}
    bool isFull(){
    		if(count == capacity)
{
		return true;
	}else{	
		return false;
	}
	}
    void show(){
    	if(isEmpty()){
		cout << "ArrayList is Empty" << endl;
	}else{
		cout << "Data of ArrayList" << endl;	
		for(int i=0; i< count;i++){
			cout << "arr["<<i<<"] : " << arry[i] << endl;
		}
	}
	}

};

