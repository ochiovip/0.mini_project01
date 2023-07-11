//main.cpp
#include "student.h"
#include "ArrayList.h"
#include <iomanip>
//#include <conio.h>
void menu();
void menuEdit();


int main(int argc, char** argv) {
	int choose;
	int Edit;
	int size;
	int index;
	string student_id;
	string prefixName;
	string firstName;
	string lastName;
	string date_issue;
	string date_expiry;
	string faculty;
	
    cout << "Input size of Student Card : ";
	cin >> size;
	Student std;
	ArrayList arL(size);
	do{
		menu();
		cout  << "Select Menu (1-5) : ";
		cin >> choose;
		switch(choose){
			case 1:
			
				cout << "-   Add   -" << endl;
				cout <<  endl;
				cout << "Input Student ID : ";
				cin >> student_id;
				cout << "Input Prefix : ";
				cin >> prefixName;
				cout << "Input First Name : ";
				cin >> firstName;
				cout <<  "Input Last Name : ";
				cin >> lastName;
				cout << "Input Date Of Issue : ";
				cin >> date_issue;
				cout << "Input Date Of Expiry : ";
				cin >> date_expiry;
				cout << "Input Faculty : ";
				cin >> faculty;
				std.setId(student_id);
				std.setPrefixName(prefixName);
				std.setFname(firstName);
				std.setLname(lastName);
				std.setDatecard(date_issue);
				std.setExpiredate(date_expiry);
				std.setFaculty(faculty);
				arL.add(std);
				break;
				case 2:
				
			
				cout << "\t   Edit  -" << endl;
				cout << "\tInput Index : ";
				cin >> index;
				cout << endl <<"\tStudent ID : " << arL.get(index).getId() << endl;
				cout << "\tPrefix : " << arL.get(index).getPrefixName() << endl;
				cout << "\tFirst Name : " << arL.get(index).getFname() << endl;
				cout << "\tLast Name : " << arL.get(index).getLname() << endl;
				cout << "\tDate Of Issue : " << arL.get(index).getDatecard() << endl;
				cout << "\tDate Of Expiry : " << arL.get(index).getExpiredate() << endl;
				cout << "\tFaculty : " << arL.get(index).getFaculty() << endl;
				do{
					menuEdit();
					cout << endl << "\tSelect Menu (1-8) : ";
					cin >> Edit;
					switch(Edit){
						case 1 :
							cout << "\tInput Student ID : ";
							cin >> student_id;
							std = arL.get(index);
							std.setId(id);
							arL.set(index,std);
							break;
						case 2 :
							cout << "\tInput Prefix : ";
							cin >> prefixName;
							std = arL.get(index);
							std.setPrefixName(prefixName);
							arL.set(index,std);
							break;
						case 3 :
							cout << "\tInput First Name : ";
							cin >> firstName;
							std = arL.get(index);
							std.setFname(fName);
							arL.set(index,std);
							break;
						case 4 :
							cout << "\tInput Last Name : ";
							cin >> lastName;
							std = arL.get(index);
							std.setLname(lname);
							arL.set(index,std);
							break;
						case 5 :
							cout << "\tInput Date Of Issue : ";
							cin >> date_issue;
							std = arL.get(index);
							std.setDatecard(datecard);
							arL.set(index,std);
							break;
						case 6 :
							cout << "\tInput Date Of Expiry : ";
							cin >> date_expiry;
							std= arL.get(index);
							std.setExpiredate(expiredate);
							arL.set(index,std);
							break;
						case 7 :
							cout << "\tInput Faculty : ";
							cin >> faculty;
							std = arL.get(index);
							std.setFaculty(faculty);
							arL.set(index,std);
							break;
							} //switch edit
				}while(Edit!=8); // menuedit
				break;	
			case 3:
				
				cout << "\tShow -" << endl;
				obj_arrayList.show();
				break;
			case 4:
			
				break;
		} //switch menu
	}while(choose!=5); //do while menu
	return 0;
}	
void menu(){
	cout <<"\t   Menu   " << endl;
	cout << "1.Add Information   :" << endl;
	cout <<" 2.Edit Information   :" << endl;
	cout << "3.Show Information    :" << endl;
	cout <<" 4.Search Information:" << endl;
	cout << "5.Exit  :" << endl;
	
}
void menuEdit(){
	cout << "\t    Menu Edit   " << endl;
	cout << "\t 1.Student ID    :" << endl;
	cout << "\t 2.Prefix         :   " << endl;
	cout << "\t 3.First Name     :   " << endl;
	cout << "\t 4.Last Name       :   " << endl;
	cout << "\t 5.Date Of Issue    : " << endl;
	cout << "\t 6.Date Of Expiry    :" << endl;
	cout << "\t 7.Faculty            :" << endl;
	cout << "\t 8.Exit                :" << endl;
}	
