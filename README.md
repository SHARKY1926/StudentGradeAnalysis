# StudentGradeAnalysis
Project: Student Grade Analysis
The objective of this project is to create a program that analyzes the grades of students in a class. The program should allow the user to enter the grades of each student and then perform various analyses on the data, such as calculating the class average, finding the highest and lowest grades, and determining how many students passed or failed.
Here's a breakdown of the project:
1. Start by including the necessary header files and defining constants for the maximum number of students.
2. Declare a 1D array to store the grades of students.
3. Implement a menu-driven system with the following options:
o Enter student grades
o Calculate class average
o Find highest and lowest grades
o Count passed and failed students
o Exit
4. For the "Enter student grades" option:
o Prompt the user to enter the number of students in the class.
o Use an if condition to validate the input (e.g., the number of students should be greater than zero and less than or equal to the maximum allowed).
o Use a loop (e.g., for loop) to get the grade for each student from the user.
o Validate the grade input using an if condition to ensure that it is within a valid range (e.g., 0-100).
5. For the "Calculate class average" option:
o Initialize a variable to store the sum of all grades.
o Use a loop to iterate through the grades array and calculate the sum.
o Calculate the class average by dividing the sum by the number of students.
o Display the class average to the user.
6. For the "Find highest and lowest grades" option:
o Initialize variables to store the highest and lowest grades.
o Use a loop to iterate through the grades array.
o Use if conditions to update the highest and lowest grade variables as you go through the array.
o Display the highest and lowest grades to the user.
7. For the "Count passed and failed students" option:
o Initialize variables to store the count of passed and failed students.
o Set a passing grade threshold (e.g., 60).
o Use a loop to iterate through the grades array.
o Use an if condition to check if each grade is above or below the passing threshold, and increment the respective counter accordingly.
o Display the count of passed and failed students to the user.
8. For the "Exit" option, gracefully exit the program.
 
