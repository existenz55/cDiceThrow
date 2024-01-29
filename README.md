# cDiceThrow
Middle Essex C Dice Throw program

Technical Requirements
Topic 1: Dice rolling
Students are supposed to develop a program that will be generating random numbers based on
the user inputs. Program is supposed to ask user for a number of faces of a dice and a number
of throws (as per example below).
Where stdout is an output of the program and stdin is input of the user. Program is supposed
to generate random numbers between 1 and a number of faces and simulate throws based on
number of throws given by the user. Program is supposed to store the number of occurrences
of each number and calculate percentage of occurrence of each number (see example below).
-> 10stdin
-> Number of throws:stdout
-> 6stdin
-> Number of faces:stdout
-> Number of faces:
-> 6
-> Number of throws:
-> 6
-> Generating throws:
-> 1
-> 5
-> 4
-> 5
-> 6
-> 6
-> Occurrences of 1: 16.66%
-> Occurrences of 2: 0.00%
-> Occurrences of 3: 0.00%
-> Occurrences of 4: 16.66%
-> Occurrences of 5: 33.33%
-> Occurrences of 6: 33.33%
stdout
stdin
stdout
stdin
stdout
stdout
stdout
stdout
stdout
stdout
stdout
stdout
stdout
stdout
stdout
stdout
stdout
Program has to check if the parameters specified by the user are within given
ranges, which are as follows:
Number of faces – x, where 1 < x < 25
Number of throws – x, where 1 < x < 500
If the parameters given by the user are outside of the range, then program should
print a message informing user about invalid parameters and ask the user for
parameters once again.
Students will be given a set of functions to generate random numbers but may
not choose them in order to achieve first class marks.
