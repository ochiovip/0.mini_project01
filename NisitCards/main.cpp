#include"NisitCard.hpp"
int main(){
	string id,prefixName,fname,lname,faculty,data;
	int size,menu,day,month,year;
	cout << "Insert size: " ;
	cin >> size;
	cout << "Insert Day : " ;
	cin >> day ;
	cout << "Insert Month : " ;
	cin >> month ;
	cout << "Insert Year : " ;
	cin >> year ;
	Day day_card;
	day_card.setDay(day);
	day_card.setMonth(month);
	day_card.setYear(year);
	NisitCard nisitCard;
	CardList cardList(size);
	do{
		cout << " 	Menu    " << endl;
		cout << "1. Add " << endl;
		cout << "2. Change " << endl;
		cout << "3. Search or Show your each" << endl;
		cout << "4. Check size Full ?" << endl;
		cout << "5. Show All" << endl;
		cout << "6. Exit" << endl;
		cout << "Choose Menu : " ;
		cin >> menu;
		if(menu == 1){
			cout << "Insert Id : ";	
			cin >> id;
			cout << "Insert PrefixName : ";	
			cin >> prefixName;
			cout << "Insert Fname : ";	
			cin >> fname;
			cout << "Insert Lname : " ;	
			cin >> lname;
			cout << "Insert Faculty : ";	
			cin >> faculty;
			nisitCard.setCard(id,prefixName,fname,lname,faculty);
			nisitCard.setDateCard(day_card);
			cardList.addCard(nisitCard);
		}
		else if(menu == 2){
			cout << "Insert search id to change : " ;
			cin >> data;
			cardList.changeCard(cardList.search(data));
		}
		else if(menu == 3){
			cout << "Insert search : " ;
			cin >> data;
			cardList.search(data);	
		}
		else if(menu == 4){
			cardList.size();
		}
		else if(menu == 5){
			cardList.showAll();
		}
	}while(menu != 6);	
	return 0;
}
