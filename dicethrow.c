#include <stdio.h>
#include <stdlib.h>

int main() {
	//we need two integers for the faces and throws and two C and F integger to clear the wrong inputs
    int face_dice, throws_dice, c , f; 
//while (1) = TRUE do the loop untill the condition is complete = we hit break
    while (1) { 
	//ask user for input
        printf("How many times are you going to throw your dices (number has to be between 1 and 500): "); 
	// check the user input and if meets the criteria of the assigment
		 if (scanf("%d", &throws_dice)  && throws_dice > 1 && throws_dice < 500) {
	//if it means the creatiria stop the loop
            break;
        } 
		else {
		 //if the above if statemnt is not true, user has entered incorrect integer
		 //throw error
            printf("The number of throws is inccorect.It should be between 1 and 500 and integer (not letter).\n");
//we assign the user input to c and then clear it			
        while ((c = getchar()) != '\n' && c != EOF);
        }
    }
	//while (1) = TRUE do the loop untill the condition is complete
    while (1) {  
	//ask for user input
        printf("Enter the Number of faces your dice will have (between 2 and 24): "); 
		//save the user input into integer face_dice
        scanf("%d", &face_dice); 
		//check if user input meets condition of the number of faces between 1 and 25
        if (face_dice > 1 && face_dice < 25) { 
		//if the above condition is correct stop the loop
            break; 
        } 
		//if the above if statemnt is false, user has entered wrong integer (not betweern 1 and 25) print error
		else 
		{
			//error message
            printf("Invalid input. Number of faces should be between 1 and 25.\n");
	//assign the user input to f
        while ((f = getchar()) != '\n' && f != EOF);//we assign the user input to f and then clear it
        }
    }//the above while loop will continue untill it hits break
	 // another integger to cound the % occurency of the face after we generate throws. we specify array that is face_dice +1
	int occurrences[face_dice + 1]; 
	//go through the elements (face_dice) of the occurrences array.
    for (int i = 0; i <= face_dice; i++) 
	{
		//reset occurences to 0
        occurrences[i] = 0;
    }
//message that we start generating throws
    printf("Generating dice throws:\n");
	 //while loop and we define one more integer I to cound the amount of thorws we did and start the loop
    for (int i = 0; i < throws_dice; i++) 
	{ 
 //we generate random throws results with range of face_dice. face_dice is +1 to shift it from range o to 1+ face dice
        int throw_result = rand() % face_dice + 1; 
		//icrease the occurencese of the throw_result by 1
        occurrences[throw_result]++;
		 //print each dice result 
        printf("Dice Throw %d\n", throw_result);
    }
//another loop to display the percentace of face occurency
    for (int face = 1; face <= face_dice; face++) { 
	// percentece is calucated by formula "how many times number occured / how many times we throw the dice *100" representing the 100% of overall dice throws
        float percentage = (float)occurrences[face] / throws_dice * 100;
		//print the number of the face and the percentage it occurse in the code
        printf("Occurrences of %d: %.2f%%\n", face, percentage);
    }
    return 0;//indicate sucesfful completetion of the program
}
