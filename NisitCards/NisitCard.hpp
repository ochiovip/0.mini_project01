#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;
class Day{
	private: 
		int day;
		int month;
		int year;
	public:
		Day();
		void setDay(int day);
		void setMonth(int month);
		void setYear(int year);
		int getDay();
		int getMonth();
		int getYear();
		void showDMY();
};
class NisitCard{
	private: 
		string id;
		string prefixName;
		string fname;
		string lname;
		string faculty; 
		Day issueDate;
		Day expiryDate;	
	public:
		NisitCard();
		void setCard(string id,string prefixName,string fname,string lname,string faculty);
		void setDateCard(Day day);
		string getId();
		string getPrefixName();
		string getFname();
		string getLname();
		string getFaculty();
		void changeId(string id);
		void changePrefixName(string prefixName);
		void changeFname(string fname);
		void changeLname(string lname);
		void changeFaculty(string faculty);
		void showCard();
};
class CardList{
	private:
		NisitCard * nisitCard;
		int capacity;
		int count;	
	public:
		CardList(int size);
		~CardList();	
		void addCard(NisitCard card);
		int search(string deteil);
		bool checkCard(string deteil);
		void changeCard(int index);
		void size();
		bool isEmpty();
		bool isFull();
		void showAll();
};
