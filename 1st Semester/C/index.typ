#set page(
  paper: "a4",
)

#set text(
  size: 14pt,
  hyphenate: false,
)

#let date = "2082-10-18"
#align(center, strong("Lab Index 4"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1], [Write a program to find the factorial of a given number.], [$#{ date }$], [],
    [2], [Write a program to find the sum of digits of a given number.], [$#{ date }$], [],
    [3], [Write a program to find the reverse of a given number.], [$#{ date }$], [],
    [4], [Write a program to find whether given number is palindrome or not.], [$#{ date }$], [],
    [5], [Write a program to check whether given number is prime or not.], [$#{ date }$], [],
    [6], [Write a program to find gcd of two numbers.], [$#{ date }$], [],
    [7], [Write a program to display the first ‘n’ terms of Fibonacci series.], [$#{ date }$], [],
    [8],
    [Write a program to generate multiplication table of number ‘n’ entered by user as:\
      1×1=1\
      1×2=2\
      ...\
      1×10=10],
    [$#{ date }$],
    [],
  )
)

#colbreak()
#let date = "2082-10-21"
#align(center, strong("Lab Index 5"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],

    [1],
    [Write a program to read N numbers from user and display the numbers, their sum and average.],
    [$#{ date }$],
    [],

    [2], [Write a program to find largest number from set of N numbers entered by users.], [$#{ date }$], [],

    [3], [Write a program to read N numbers and sort them in ascending order.], [$#{ date }$], [],

    [4], [Write a program to search an item in an array.], [$#{ date }$], [],

    [5], [Write a program to add two matrices by asking matrix order from user.], [$#{ date }$], [],

    [6], [Write a program to display transpose of a given matrix.], [$#{ date }$], [],

    [7], [Write a program to multiply two matrices by asking size from user.], [$#{ date }$], [],
  )
)

#linebreak()
#let date = "2082-10-26"
#align(center, strong("Lab Index 6"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1],
    [Write a program to demonstrate the use of string library functions: strlen(), strcpy(), strcat(), strcmp(), strlwr(), strupr() and strrev().],
    [$#{ date }$],
    [],

    [2], [Write a program to find length of a string without strlen function.], [$#{ date }$], [],
    [3], [Write a program to convert string into upper case without using function.], [$#{ date }$], [],
    [4], [Write a program to find reverse of string without using function.], [$#{ date }$], [],
    [5], [Write a program to copy string without using function.], [$#{ date }$], [],
    [6], [Write a program to read N words and sort them in alphabetical order.], [$#{ date }$], [],
  )
)


#colbreak()
#let date = "2082-10-29"
#align(center, strong("Lab Index 7"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1], [Write a program to find factorial of given integer using a function.], [$#{ date }$], [],
    [2], [Write a program to find surface area of box using function.], [$#{ date }$], [],
    [3], [Write a program to find maximum of two number using function.], [$#{ date }$], [],
    [4], [Write a program to reverse a number using function.], [$#{ date }$], [],
    [5], [Write a program to implement bubble sort using function.], [$#{ date }$], [],
    [6], [Write a program to find factorial of number using recursion.], [$#{ date }$], [],
    [7],
    [Write a program to generate first n terms of Fibonacci series using recursive function to return Nth term of series.],
    [$#{ date }$],
    [],

    [8], [Write a program to search an item in a list of 10 numbers using function.], [$#{ date }$], [],
    [9], [Write a program to display sum of digits of a number using function.], [$#{ date }$], [],
    [10], [Write a program to find sum of two matrices passing matrices to the function.], [$#{ date }$], [],
  )
)


#colbreak()
#let date = "2082-11-04"
#align(center, strong("Lab Index 8"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1],
    [Create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee. Finally display these members' value.],
    [$#{ date }$],
    [],

    [2],
    [Write a program to enter two Cartesian coordinate points and display the distance between them.],
    [$#{ date }$],
    [],

    [3],
    [Define a structure "complex" to read two complex numbers and perform addition, subtraction of these two complex numbers and display the result.],
    [$#{ date }$],
    [],
  )
)


#linebreak()
#let date = "2082-11-10"
#align(center, strong("Lab Index 9"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1], [Write a program to find the sum of all the elements of an array using pointers.], [$#{ date }$], [],
    [2], [Write a program to swap two numbers using call by reference.], [$#{ date }$], [],
    [3],
    [Write a program to allocate memory for an array using dynamic memory allocation, storing the values in the array and retrieving the values from the array.],
    [$#{ date }$],
    [],

    [4],
    [Pass the structure student with member RollNo, Name, Address, Age & marks in physics, math into a function and read the structure member and display the values from the function (use structure pointer).],
    [$#{ date }$],
    [],
  )
)


#colbreak()
#let date = "2082-11-25"
#align(center, strong("Lab Index 10"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1],
    [Write a program to create a file and store records of 10 students (name, roll, marks). Then read and display all the records from the file.],
    [$#{ date }$],
    [],

    [2],
    [Write a program to open an existing text file and count the total number of characters, words, and lines in the file.],
    [$#{ date }$],
    [],

    [3], [Write a program to copy the contents of one file to another file.], [$#{ date }$], [],
    [4],
    [Write a program to create a structure employee with fields: id, name, address, and salary. Write multiple employee records into a file and display all the records by reading from the file.],
    [$#{ date }$],
    [],

    [5],
    [Write a program to demonstrate the use of file positioning functions fseek(), ftell(), and rewind().],
    [$#{ date }$],
    [],
  )
)


#linebreak()
#let date = "2082-12-01"
#align(center, strong("Lab Index 11"))
#(
  table(
    columns: 4,
    [*SN*], [*Title*], [*Lab Date*], [*Signature*],
    [1],
    [Write a program to draw different basic shapes: line, rectangle, circle, and ellipse using graphics functions.],
    [$#{ date }$],
    [],

    [2], [Write a program to draw a smiley face using circle and arc functions.], [$#{ date }$], [],
    [3], [Write a program to draw and fill a bar graph using bar() and setfillstyle() functions.], [$#{ date }$], [],
    [4],
    [Write a program to create a simple animation of a moving car using graphics functions and delay.],
    [$#{ date }$],
    [],

    [5],
    [Write a program to demonstrate different line styles, colors, and fill patterns available in C graphics.],
    [$#{ date }$],
    [],
  )
)
