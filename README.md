# Programming-in-C-LABS
Lab exercises for course: Programming in C

## lab1_1.c 
```
The calculation will be based on:
  a.	The number of lab-absences that each student has 
  b.	The grades in the 2 mid-tests 
  c.	The grade of the final exam
The program will ask the user to give the above information and at the end it will print the final grade according to the following algorithm: 
  Input Data: Number of absences Α, grade of first mid-test PR1, grade of second mid-test PR2, final grade ΤE. 
              1. Calculation of absences’ grade: Α = {no absence:10, one absence:5, >=2 absences:0} 
              2. Lab’s grade : ΒΕ = Α(20%) + PR1(40%) + PR2(40%) Αν ΒΕ < 4.5 then print ”Failed in labs ” and terminate. 
              3. If ΤΕ < 4.5 then  print ”Failed in the final exam” and terminate.
              4. Computation of the final grade: GR = BE(50%) + TE(50%)
              5. Print  ”Success in the examination of Programming in C with grade: GR”
              
  ```
  
 
## lab1_2.c 
```
You need to create a program that reads what characters the user gives from the keyboard and follows the rules below, until the character ‘$’ is given or 30 characters are completed in total.
       •	If the character is an upper case letter (from ‘A’ to ‘Z’) then convert it to lower case and print it.
       •	If the character is a lower case letter (from ‘a’ to ‘z’) then calculate the position of this letter in the English alphabet and print it. 
           (for example for letter a print 1, for letter c 3, etc)
       •	If the character is a digit from ‘0’ to ‘9’, then place its integer value to an array of integers. Name this array as nums.
       •	Any other character is printed as is.
In the end the program must print the content of the array.
Attention: Try not to use ASCII table.
```

## lab1_3.c
```
Write program to check if a fully completed 9x9 table is valid Sudoku solution. The control will be done by a check_solution() function, which is called by main (). The function will accept the 9x9 table as an argument.
You can find example of valid and non-valid SUDOKU solutions on the internet.
```

## lab1_4.c

```
Convert a number to its binary format and print it.
```

## lab2_1.c

```
Search a number using pointer
```

## lab2_2.c

```
Compute min, max and average values, using pointers.
```

## lab2_3.c

```
Merge 2 sorted arrays in a new also sorted array
```

## lab3_1.c

```
Display frequency of numbers in a given sentence
```

## lab3_2.c

```
Card Number validity algorithm

1. Consider as 1st digit the last one (most right),
   as 2nd digit the semifinal, etc.
2. Double each digit evenly. If a double digit occurs,
   add its digits (eg 7 will become 14, and finally 1 + 4 = 5).
3. Add up all the digits of the number. If the sum is
   multiplied by 10, the number is valid, otherwise it is invalid.

```


## lab3_2.c

```
Pascal Triangle

The well-known Pascal triangle is a triangular arrangement of binomial coefficients. For example, for
n = 5 is as follows:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

This is a lower triangular table of n lines where the elements of the first column (column 0) and
diagonal is equal to 1, while any other element in row i and column j is equal to the sum
of the element just above (ie on line i - 1, column j) and of the top and left (ie
row i - 1, column j - 1).
You need to create an int ** pascal (int n) function?; which will dynamically construct the Pascal triangle
with n lines and will return it. Each row of the table should have space for exactly as many items
are needed (ie line i should have i + 1 elements).
Main () will wait for n as the only argument (… argc, argv), it will call pascal () to make the triangle,
will print it on the screen, and release the free memory.
```



