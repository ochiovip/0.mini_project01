#include "NisitCard.hpp"
// Day Class
Day::Day(){
	day = 0;
	month = 0;
	year = 0;
}
void Day::setDay(int day){
	if(day > 31 || day < 1){
		cout << "PLs Insert 1-31 day..." << endl;
	}
	else{
		this->day = day;
	}
}
void Day::setMonth(int month){
	if(month > 12 || month < 1){
		cout << "PLs Insert 1-12 month..." << endl;
	}
	else{
		this->month = month;
	}
}
void Day::setYear(int year){
	if(year < 1){
		cout << "PLs Insert upper 0 year ..." << endl;
	}
	else{
		this->year = year;
	}
}
int Day::getDay(){
	return day;
}
int Day::getMonth(){
	return month;
}
int Day::getYear(){
	return year;
}
void Day::showDMY(){
	cout << day << "/" 
		<< month << "/"
		<< year << endl;
}

// NisitCard class 
NisitCard::NisitCard(){
	id = "" ;
	prefixName = "";
	fname = "";
	lname = "";
	faculty = "";
}
void NisitCard::setCard(string id,string prefixName,string fname,string lname,string faculty){
	this->id = id;
	this->prefixName = prefixName;
	this->fname = fname;
	this->lname = lname;
	this->faculty = faculty; 		
}
void NisitCard::setDateCard(Day day){
	issueDate = day;
	expiryDate = day;
	expiryDate.setYear(day.getYear() + 2);
}
void NisitCard::changeId(string id){
	this->id = id;
}
void NisitCard::changePrefixName(string prefixName){
	this->prefixName = prefixName;
}
void NisitCard::changeFname(string fname){
	this->fname = fname;
}
void NisitCard::changeLname(string lname){
	this->lname = lname;
}
void NisitCard::changeFaculty(string faculty){
	this->faculty = faculty;
}
string NisitCard::getId(){
	return id;
}
string NisitCard::getPrefixName(){
	return prefixName;
}
string NisitCard::getFname(){
	return fname;
}
string NisitCard::getLname(){
	return lname;
}
string NisitCard::getFaculty(){
	return faculty;
}
void NisitCard::showCard(){
	cout << "ID : " << id << endl
		<< "Name : " << prefixName << " " 
		<< fname << " " << lname << endl
		<< "Faculty : " << faculty << endl;
	cout << "Issue Date : ";
	issueDate.showDMY();
	cout << "Expiry Date : ";
	expiryDate.showDMY();
}

// CardList
CardList::CardList(int size){
	capacity = size;
	count = 0;
	nisitCard = new NisitCard[size];	
}
CardList::~CardList(){
	delete [] nisitCard;
	cout << "========== Delete Complete =============" << endl;
}
void CardList::addCard(NisitCard card){
	if(!isFull()){
		int check = -1;
		for(int i = 0 ; i < count ; i++){
			if(nisitCard[i].getId() == card.getId() || (nisitCard[i].getFname() == card.getFname() &&  nisitCard[i].getLname() == nisitCard[i].getLname())){
				check = i;
				break;
			}
		}
		if(check == -1){
			this->nisitCard[count] = card;
			count++;
		}
		else{
			cout << "========== It to used.. ==========" << endl;
		}	
	}
	else{
		cout << "======== Full!!!!!!!!!!!!!!! ==========" << endl;	
	}	
}
int CardList::search(string deteil){
	int check = -1;
	for(int i = 0 ; i < count ; i++){
		if(this->nisitCard[i].getId() == deteil){
			check = i;
			break;
		}
	}
	if(check == -1){
		cout << "======== Not found... ==============" << endl;
		return -1;
	}
	else{
		cout << "======== Found... ==============" << endl;
		nisitCard[check].showCard();
		return check;
	}
}
bool CardList::checkCard(string deteil){
	int check = -1;
	for(int i = 0 ; i < count ; i++){
		if(this->nisitCard[i].getId() == deteil){
			check = i;
			break;
		}
	}
	if(check == -1){
		return true;
	}
	else{
		return false;
	}
}
void CardList::changeCard(int index){
	string change;
	int menu;
	if(index != -1){
		do{
			cout << "   Change Menu   " << endl;
			cout << "1. Change ID " << endl;
			cout << "2. Change PrefixName" << endl;
			cout << "3. Change Fname" << endl;
			cout << "4. Change Lname" << endl;
			cout << "5. Change Faculty" << endl;
			cout << "6. Show Change Result" << endl;
			cout << "7. Back Main menu" << endl;
			cout << "Choose Change : " ;
			cin >> menu;
			if(menu == 1){
				cout << "Insert : ";
				cin >> change;
				if(checkCard(change)){
					nisitCard[index].changeId(change);	
				}
				else{
					cout << "========== It to used.. ============" << endl;
				} 
			}
			else if(menu == 2){
				cout << "Insert : ";
				cin >> change; 
				if(checkCard(change)){
					nisitCard[index].changePrefixName(change);	
				}
				else{
					cout << "========== It to used.. ============" << endl;
				} 
			}
			else if(menu == 3){
				cout << "Insert : ";
				cin >> change; 
				if(checkCard(change)){
					nisitCard[index].changeFname(change);	
				}
				else{
					cout << "========== It to used.. ============" << endl;
				} 
			}
			else if(menu == 4){
				cout << "Insert : ";
				cin >> change; 
				if(checkCard(change)){
					nisitCard[index].changeLname(change);	
				}
				else{
					cout << "========== It to used.. ============" << endl;
				} 
			}
			else if(menu == 5){
				cout << "Insert : ";
				cin >> change; 
				if(checkCard(change)){
					nisitCard[index].changeFaculty(change);	
				}
				else{
					cout << "========== It to used.. ============" << endl;
				} 
			}
			else if(menu == 6){
				cout << "========== Check ==========" << endl;
				nisitCard[index].showCard();
			}
		}while(menu != 7);
	}
}
void CardList::size(){
	cout << "Size : " << count << "/" << capacity << endl; 
}
bool CardList::isEmpty(){
	if(count == 0){
		return true;
	}
	else{
		return false;
	}
}
bool CardList::isFull(){
	if(capacity == count){
		return true;
	}
	else{
		return false;
	}
}
void CardList::showAll(){
	for(int i = 0 ; i < count ; i++){
		cout << "=================== [" << i+1 << "] ===============" << endl;
		nisitCard[i].showCard();
	}
}

