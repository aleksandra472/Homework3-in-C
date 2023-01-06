#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	srand(time(NULL)); //every time give new word
	char words[] = {"circle", "mountain", "oxygen", "snail", "microwave", "transcript", "strength", "hand", "hangman"};
	int random = rand() % 9;
	int correct = 0, duplicate = 0;
	int lenght_word = strlen(words[random]);
	char guessed_letters = malloc(lenght_word);
	
	while (correct < lenght_word)
	{	
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
		
		if (lives == 0){
		printf("You lost, the word is: %s\n", words[random]);
	}
	else
	{
		printf("You win!");
	}
	
	return 0;
}
