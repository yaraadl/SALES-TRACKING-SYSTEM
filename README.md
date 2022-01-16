# SALES-TRACKING-SYSTEM
A program to simply allow you to store information for the sales of a company about the performance of its branches .For each branch, it stores the sales revenue over the course of 12 months

Function [1]:
Aim: allows the user to read the data of employees and store them in a data structure.
Steps:
1- First of all we ask the user to enter the number of employees of his company
which will be scanned & will be considered the number of loops that we will take
to perform the data entry process
2- Then we will scan the id & salary for each using a for loop and using the
variables (I) which is integer.
3- Used variables: I, employee_num ------> integer data type
(I used this data type as it is a simple counter which needn't to
be a decimal).
4- Float salaries [] --------> a 1d array to store the salaries which is float as the
salary may be of a decimal number.
Int ids [] --------> a 1d array to store the ids which is integer.
Function [2]:
Aim: allows the user to find & return the subset of ids of employees in an array
whose salaries exceeded a user specified value.
Steps:
1- First of all we ask the user to enter his exceeded limit salary for the employees of
his company which will be scanned & will be considered the value by which we will
compare each salary for every employee.
2- Then we will go through a for loop to pass over all salaries & comparing it to the
exceeded value which the user entered using the variable (I) which is integer.
Handling error:
3- Checking at the same time not to go through the spare array elements which we
reserved by a zero.
_if the salary is greater than the exceeded value the id of the same (i) is returned to
the new array
-if the id isn’t found in the data base a message is printed out to handle this case.
4- Used variables: I, employee_num ------> integer data type
5- Float salaries [] --------> a 1d array to store the salaries which is float as the salary
may be of a decimal number.
int ids [] --------> a 1d array to store the ids which is integer.
int required_ids [] --------> a new 1d array through which we will store the ids
of employees which is greater than the user exceeded value . 

Function [3]:
Aim: allows the user to give a pay rise to a certain employee according to his
performance .The id of the employee and his salary are entered by the user
then the new and the old salary are printed out for the user & the whole
data base will be printed while being updated .
Steps:
1- First of all we ask the user to enter the id for whom he want to increase his
salary ,This id will be scanned & will be compared to all the ids in the array .
2- if the id was found to be equal to one of the ids in the array we will use the
counter to get the salary of this array ,
3-Then we will ask the user to enter the amount of increase in this salary .then he
will get the old and new salary updated & we will print the whole data base
once again to make sure that the data of employees is updated there.
4-then we will ask the user if he wishes to update the salary of any other employee
by scanning a character that represents (y------>yes)or(n------>no)
5- Used variables: I, employee_num ------> integer data type
6- Float salaries [] --------> a 1d array to store the salaries which is float as the salary
may be of a decimal number.
int ids [] --------> a 1d array to store the ids which is integer.
Char x---------> through which we will obtain the answer of the user 
Function [4]:
Aim: printing out the ids and salaries of all employees for the user
Steps:
1- By going through a nested for loop to pass over all available employees
data (id&salary).
2- So that we could print all ids& salaries of all employees.
3- *note*%0.2f is used as we are printing float salaries. So that the array
wouldn't be full of decimal zeros which must be rejected while performing
these operations.
*note* the number of loop iterations will be equal to the number of
employees.
4- Checking at the same time not to print the spare array places which we
reserved by a zero. If it is printed garbage value may appear.
5- Used variables: I ------> integer data type
6- Float salaries [] --------> a 1d array to store the salaries which is float as the
salary may be of a decimal number.
int ids [] --------> a 1d array to store the ids which is integer.

