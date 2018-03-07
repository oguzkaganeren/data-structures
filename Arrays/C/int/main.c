#include <stdio.h>
#include <stdlib.h>
static int sizeOfArray;
int *array;
void addElement(int element,int position){
	array[position]=element;
}
void removeElement(int position){
	int i;
	if(sizeOfArray!=0){
		if(position<sizeOfArray-1){
			for(i=position;i<sizeOfArray-1;i++){
				array[i]=array[i+1];
			}
		}else{
			printf("Error the position");
		}
	}else{
		printf("Your array is too small");
	}
	
}
void removeLastElement(int position){
	
}
void removeFirstElement(int position){
	
}
void printArray(){
	int i;
	for(i=0;i<sizeOfArray;i++){
			printf("%d",array[i]);
	}
	
}
int main(){
	sizeOfArray=50;
	array=malloc(sizeof(int)*sizeOfArray);
	addElement(88,0);
	printArray();
	removeElement(0);
	printArray();
	free(array);//for garbage collection
	return 0;
}

