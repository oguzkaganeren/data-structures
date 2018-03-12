#include <iostream>
using namespace std;
int sizeOfArray;
void addElement(int array[],int element,int position){
	array[position]=element;
}
void removeElement(int array[],int position){
	array[position]=NULL;
}
int main(){
	sizeOfArray=10;
	int myArray[sizeOfArray]={0};
	addElement(myArray,5,0);
	removeElement(myArray,0);
	if(myArray[0]==NULL){
		cout << "Yes, you can define NULL in integer array";
	}
	cout << myArray[0];
	return 0;
}

