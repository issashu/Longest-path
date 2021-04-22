Task given during C training in Code Academy Sofia:

Write a program that finds the longest adjacent sequence of colors in a matrix(2D grid).
Colors are represented by ‘R’, ‘G’, ‘B’ characters (respectively Red, Green and Blue).
You will be provided with 4 individual test cases,
which must also be included in your solution.

1) Individual test case input format:
- First you should read two whitespace separated 32-bit integers from the provided test case
- that represents the size (rows and cols) of the matrix.
- Next you should read rows number of newline separated lines of 8-bit characters.
Your program should find and print the longest adjacent sequence (diagonals are not
counted as adjacent fields), and print to the standard output the number.
NOTE: in case of several sequences with the same length – simply print their equal length.

2) Your program entry point should accept from one to four additional parameters.
Those parameters will indicate the names of the test cases that your program should run.
• Example 1: ./myprogram test_1 test_3
• Example 2: ./myprogram test_1 test_2 test_3 test_4
• you can assume that the input from the user will be correct (no validation is required)

3) You are free to choose a language for implementation between C and Python.

4) If you provide a C solution:
• Your program should not cause memory leaks.
• You should also include a Makefile or use CMake tool to generate a Makefile.
• Running the GNU make command on your Makefile should produce a binary.
• Bonus points:
◦ provide also a GNU make clean command if you are writing the Makefile OR
◦ provide out-of-source build and build clean mechanism if you are using CMake
◦ provide valgrind report on your solution with modes
“--leak-check=full --track-origins=yes”
