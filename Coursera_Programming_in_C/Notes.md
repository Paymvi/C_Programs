
# Module 1
## Video Notes
- python 2 truncated because it was based off of c
- people use hexadecimal
- a major reason to move UNIQ from the B languages to the C languages was to have a language that made efficient use of byte addressing
- word (group of bits) oriented - a lot of masking and shifting
- endianness is a problem in the 1970s (some use big and some use little endian)
- B is word oriented
- C is byte oriented

## Textbook notes:
From chapter 2 of "The C programming language"
2.1 Variable Names, 2.2 Data Types and Sizes, 2.3 Constants
- first character must a letter of an underscore
- Similar to other languages
	- C is case sensitive
	- lower case -> variables
	- upper case -> constants
	- modifiers: short int, long int, unsigned int
	- escape sequences are similar: \m, \t, \\, \', \", \0
- modern c compilers don't have the limit of 8 characters
- "natural size" jus manes fasted for that CPU
- time switched from 32 bit int to 64 bit longs to last longer
- IEEE 754 standard (1985) standardized how float and double behave across all computers
- Numbers
	- Prefix with "0" -> octal
	- Prefix with "0x" or "0X" -> hexadecimal
- '\0' is the null character used to mark the ends of strings
	- C auto adds the \0 at the end
	- char -> 1 byte. string -> 2 bytes ('x' + '\0')
- strlen(x) <- finds string length
2.4 Declarations, 2.5 Arithmetic operators
- char c, line[1000];
- all floating point math is done in double preicions be default
- mostly everything is the same... including casting: (double)n, incrementing/decrementing ++x,
- bitwise operators
    - bitwise operator cnanot be used on floats/doubles
    - ^ = XOR... ie: x ^ MASK
    - ~ = NOT
    - << left shift 
    - >> right shift
- C has operator precedents (most left ot right) except for "! ~ ++ -- - (type) * & sizeof"


### AI Coach debrief
- How does variable initializiation work in C?
	- I said that it is to assign the right type. Coach said that it helps the compiler understand how much memory to allocate and how to interpret the data stoared in that variables
    - In C if you have an uninitialixed variable it can still compile, but it can lead to undefined behavior during runtime (like garbage values)
### Test lessons
- ; is a statement terminator
- atoi is ASCII to interger. It looks like atoi(str)
### Coding exercises
1
- You can declare a variable in the loop thing so it has to look like (i = 0; i...)
- You can use else if in C
- You can't do '' + '\0' to make a string you need to manually put content into the char array
like s3[0] = tolower(s[i])
and  s3[1] = '\0' 
- atoi takes in a string not a character (or else it will return 0)
- value * 16^(value from end - 1)
- you use pow() in C
2
- ()? :
- ^ That is the ? operator and you can use it in C
3
- You use scanf( , ) to get inputs in C
- %d for int, %f for float, %c for char

https://www.cc4e.com/code/


# Module 2
## Video notes
- 3.1: semicolon across languages
    - C, Java, PHP (follows C closely): Terminator
    - Python, Javascript, shell script: Seperator
- 3.3: else if across languages
    - else if (is just poor indentation but it works lol)
    - elif is for python
- 3.4: never use the switch statement
    - switch statement comes from assembly jump tables
- 3.5: Using the comma
    - "," is like a light semi colon
- 3.5: Excessive succinctness / brevity

## Textbook notes
From chapter 3 of "The C programming language"
- multiple statements in {} is called a block
- know about else if (ladder) and switch statements
- dow while is like while but runs at least once
- know "break" and "continue"
- You can use "goto" but avoid if passible.

## Quiz notes
- elseif is not a reserved word
- reason to use a switch statement: you need a branch table
- what follow loop style foes the break statement allow
- Why do we not need goto statements anymore? we have the try except construct
- What is the fortan quivalent to the c switch statemet?
- Fortran stands for FORmula TRANslation, and its one of the oldest high level progrmaming languages
    - "computered GOTO" form fortran is equivalnet to a C switch statement
##
- Use strcpy() to copy content into a string


## Chapter 4 Video notes
- Section 4.1 - Automatic variabels, parameters and the stack, Oh my!
- Section 4.3 - Why arrays pass by reference - the rest is chatper 5
- Section 4.7 - Register variables
- Section 4.10 - Recursion - becuase recursion
- SEciton 4.11 - Pre-processor - Compiled architecture
- Register variables... you cna't get the memory address of a variable declared as a register, likely completely ignore in modern compilers
- Know about stack frames
- C Pre proccessor: phase of compilation before the actual C compiler runs (coding prep)
    - File inclusions (#include), # macro substitution (#define), conditional compilation (#if, #ifdef), other directives like (#undef, #error, #line)
    - It doens't compile, it simply expands the code
    - the output is C source code
- recursion: has a base case (so it doens't run forever) and recursive case
- drawback to recursion
    - Stack overflow, eahc recursive call adds a new layer fo the call stack. if the recursion too deep, it can lead toa  stack overflow error
    - It can be less efificent than iterative solutions
    - It is less intuitive
    - It tends to consume more mmeory due to having more stack frames

## Quiz Notes
- Reigsters are a stoarge class that are not used in modern C programs
- deafult return type is int in 1978 C
- "automatic" is the storage type that are allocatedi the stack fram when a funciton is entered
- The scope of an extern varaibles is the applicaiton
    - "extern type variable_name"
    - "variable name = default_value"
- append/pop in python are a lot like stacks
- rm with the -r includes the child folders as well
- rm -i myfile.txt (the -i makes sure it asks you first before deleting... this is helpful when removing multiple files)
- you can use mv to rename files as well
- ls -ltr /etc/
    - ls -ltr /etc/ lists all files and directories inside /etc/ in long format, sorted by modification time from oldest to newest.
    -t stands for sort by modification time
    -r reserves the order
*Security - Managing File Permissions and Ownership*
- rwe 
    - read write execute
    - user, group, other
    - +/-
    - Example: chmod go-r my_new_file. In the chmod command, go-r is the permission change to be applied, which in this case means removing for the group (g) and others (o) the read (r) permission. The chmod command can be used with both files and directories.
- When you remove permission for a directoryk you can't make it your present working directory (you can't enter it)
    - even if you have "write" permissions, you cna't actually creat a new directory within it
- "drwxr-xr-x" d stands for the type of file
- use "ls -ld directory_name" (-d) to list permissions for the directory (not the contents)
    -d stands for directory entity
*Viewing File content*
- cat, more
- head, tail
- wc (word count) (lines, words, characters (it counts \n characters)
*Useful Commands for Wrangling Text Files*
- sort
- sort -r pets.txt
- uniq pets.txt
- grep ch people.txt (find ch lines in the text)
- cut -c 2-9 (You can cut and show only teh middle)
- cut -d ' ' -f2 people.txt (It will return the last name of all the people)
- paste first.txt last.txt yob.txt (tab is the defualt delimiter)
- past -d "." first. txt last.txt yob.txt (you can custom make the delimiter)

