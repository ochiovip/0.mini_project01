#include<iostream>
using namespace std;
class ArrayList

{
	private :

		int capacity;
		int count;
		int *item;
		int *arry;

	public :

		ArrayList(int size);
		~ArrayList();
		void add(int value);
		void add(int index,int value);
		int get(int index);
		void set(int index,int value);
		int indexOf(int value);
		int size();
		int max_size();
		bool isEmpty();
		bool isFull();
		void show();
		void remove();

};
