Experiment 7: Loops in C++

Title of the Experiment:To study and implement different types of loops in C++ such as for and while for repetitive execution.

Objective / Aim:

To understand and implement loop constructs in C++ to perform iterative tasks such as:

Printing even numbers from 0 to 10 using a for loop

Skipping specific values using continue in a for loop

Validating password input using a while loop

Tools Used:

Code::Blocks IDE or Visual Studio Code

GCC Compiler (MinGW or g++)

Operating System: Windows or Linux

Theory:

Loops in C++ allow the execution of a block of code multiple times as long as a specified condition is true. There are three primary types of loops:

for loop – Used when the number of iterations is known.

while loop – Used when the number of iterations is not known in advance.

do-while loop – Ensures the loop runs at least once (not used in this experiment).

These are useful for tasks like counting, conditional repetition, and input validation.

Programs Covered:

1. Printing Even Numbers from 0 to 10 using a For Loop

Algorithm:

Start

Declare an integer variable i

Use a for loop to iterate i from 0 to 10

Inside the loop, check if i % 2 == 0

If true, print the value of i

Repeat until i > 10

Stop

2. Skipping a Value using Continue in a For Loop

Algorithm:

Start

Declare an integer variable i

Use a for loop to iterate i from 1 to 10

Inside the loop, check if i == 5

If true, use continue to skip the rest of the loop

Else, print the value of i

Repeat until i > 10

Stop

3. Password Validation using a While Loop

Algorithm:

Start

Define a string variable correctPassword as "123"

Declare a string variable inputPassword

Use a while (true) loop

Prompt the user to enter a password

Read input into inputPassword

If inputPassword == correctPassword

Display "Access granted!"

Use break to exit the loop

Else

Display "Access denied! Try again."

Repeat until correct password is entered

Stop

Flowchart (Text Description):

Start → Input → Loop condition check → Body of loop → Continue/Break → Repeat or Exit → End

Conclusion:

In this experiment, we successfully used for and while loops to perform repetitive tasks such as printing even numbers, skipping specific values, and validating input. This improved our understanding of control flow using loops in C++.
