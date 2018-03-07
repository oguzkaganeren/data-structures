#include <stdio.h>
#include <stdlib.h>
static int sizeOfArray;
int *array;
/*
*
*@return void
*@parameters int element,int position
*/
void addElement(int element,int position){
	array[position]=element;
}
/*
*
*@return void
*@parameters int position of removing element
*/
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
	//removeElement(0);
	//must find the way which is assigning null in removing element
	printArray();
	free(array);//for garbage collection
	return 0;
}

