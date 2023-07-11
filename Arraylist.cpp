#include <iostream>

#include "ArrayList.h"

ArrayList::ArrayList(int size)

{
	arry = new int[size];
	capacity = size;
	count = 0;

}

ArrayList::~ArrayList()

{
	delete [] arry;	

}

void ArrayList::add(int value)

{

	if(isFull()){
		cout << "ArrayList is Full." << endl;
	}else{
		arry[count] = value;
		count++;
	}
}

void ArrayList::add(int index,int value)

{
	if(isFull()){
		cout << "Is Full" << endl;
	}else{
		arry[index] = value;
	}
}

int ArrayList::get(int index)

{
	if(count <= 0||count > capacity)
{
		cout <<"Err Size" << endl;
	}
	return index;
}

void ArrayList::set(int index,int value)
{

	arry[count] = value;
}

int ArrayList::indexOf(int value)
{
	for(int i = 0;i < count;i++){
		if(arry[i] == value){
			cout << "Index : " << i << endl;
			return 0;
		}else if(i == count-1 && arry[i] != value)
{
			cout << "No Data" << endl;
			return 0;
		}
	}
	return 0;
}

int ArrayList::size()
{
	return count;
}

int ArrayList:: max_size()
{
	return capacity;
}

bool ArrayList::isEmpty()
{
	if(count == 0){
		return true;
	}else{
		return false;	
	}
}

bool ArrayList::isFull()
{
	if(count == capacity)
{
		return true;
	}else{	
		return false;
	}
}

void ArrayList::show()
{
	if(isEmpty()){
		cout << "ArrayList is Empty" << endl;
	}else{
		cout << "Data of ArrayList" << endl;	
		for(int i=0; i< count;i++){
			cout << "arr["<<i<<"] : " << arry[i] << endl;
		}
	}
}

void ArrayList::remove()
{
	count--;

}
