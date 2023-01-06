#include <stdio.h>

void destination(int i, int floor){
	printf("What floor are you going to?\n");
	scanf("%s", floor);	
	while (i<floor && floor<9){
		i++;
		printf("Floor number %s\n", i);
	}
}
void elevator_moving(){
	
}

int main(){
	char floors[][9]={'B3', 'B2', 'B1', 'G', '1', '2', '3', '4', '5'};
	int pas;
	printf("How many passengers are there?\n");
	scanf("%i", pas);
	for (int j=0; j<pas; j++){
		elevator_moving(i, floor);
	}
	

	return 0;
}
