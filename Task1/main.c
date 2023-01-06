#include <stdio.h>


void destination(int i, int floor){
	char floors[][9]={'B3', 'B2', 'B1', 'G', '1', '2', '3', '4', '5'};
	printf("What floor are you going to?\n");
	scanf("%s", floor);	
	while (floors[i]<floors[floor] && floors[floor]<9){
		i++;
		printf("Floor number %s\n", i);
	}
}
void elevator_more_rides(int i, int floor){
	char floors[][9]={'B3', 'B2', 'B1', 'G', '1', '2', '3', '4', '5'};
	while (floors[i]<floors[floor] && floors[floor]<9)
	for (int n=0; n<10; n++){
	printf("Do you want to use the elevator again?\nSelect /"1" for yes or /"0" for no");
	scanf("%d", a);
	if(a==0)
	break;
	else if(c==1){
		printf("What floor are you going to?\n");
		scanf("%s", floor);
	if (floors[i]<floors[floor]){
		printf("Going up!\n");
		while (floors[i]<floors[floor]){
			i++;
			printf("Floor number %s\n", i);
	}
	}
	else if (floors[i]>floors[floor]){
		printf("Going down!\n");
		while (floors[i]>floors[floor]){
			i--;
			printf("Floor number %s\n", i);
	}
	}
	else
	printf("You are at the right floor!\n");
}
}

int main(){
	int pas;
	printf("How many passengers are there?\n");
	scanf("%i", pas);
	for (int j=0; j<pas; j++){
		destination(i, floor);
		elevator_more_rides(i, floor);
	}
	
	return 0;
}
