#include<stdio.h>
#include<conio.h>
void ba(int arrayvar[] , int lengtharr){
	for(int i=0 ;i<lengtharr;i++){
		arrayvar[i] = i;
	}
}
int main(){
	int values[15];
	printf("The value at location 7 starts as %d\n",values[7]);
	ba(values,15);
	printf("The value at location 7 is now %d\n ",values[7]);
	return 0;
}
