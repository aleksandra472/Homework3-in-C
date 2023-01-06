#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_lives(){
	int lives=5;
	switch(lives--){
		case 4:
			printf("Face is drawn.\n");
			break;
		case 3:
			printf("Body is drawn.\n");
			break;
		case 2:
			printf("Arms are drawn\n");
			break;
		case 1:
			printf("Legs are drawn.\n");
			break;
		case 0:
			printf("Hair is drawn.\n");
			break;
	}
	
}
int main() 
{
	srand(time(NULL)); //every time give new word
	char words[];
	words[20] = {"circle", "mountain", "oxygen", "snail", "microwave", "transcript", "strength", "hand", "hangman"};
	int random = rand() % 9;
	int correct = 0, duplicate = 0;
	int lenght_word = strlen(words[random]);
	char guessed_letters = malloc(lenght_word);
	
	while (correct < lenght_word)
	{	
		for(int i=0; i<lenght_word; i++) 
		{
			if(guessed_letter[i] == 1){
				printf("%c", words[random][i]);
			}
			else
			{
				printf("_");
			}
			if(guessed_letter == words[random])
			{
				guessed_letter[i] = 1;
				correct++;
			}
		}
		
		printf("\nCorrect letters: %d\n", correct);
		printf("Enter letter: ");
		scanf("%c", guess);
		
		guessed_letter = guess[0];
		printf("Guessed letter: %c\n", guessed_letter);
		
		duplicate = correct;
		
		for(i=0; i<lenght_word; i++) 
		{
			if(guessed_letter[i] == 1){
				continue;
			}
			if(guessed_letter == words[random])
			{
				guessed_letter[i] = 1;
				correct++;
			}
		}
		if (duplicate == correct){
			print_lives();
		}
		else {
			printf("Correct letter\n");
		}
	}
	
	if (lives == 0){
		printf("You lost, the word is: %s\n", words[random]);
	}
	else
	{
		printf("You win!");
	}
	
	return 0;
}
