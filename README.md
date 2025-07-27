### **Experiment 7: Loops in C++**

**Title of the Experiment:**
To study and implement different types of loops in C++ such as `for` and `while` for repetitive execution.

---

### **Objective / Aim:**

To understand and implement loop constructs in C++ to perform iterative tasks such as:

* Printing even numbers from 0 to 10 using a `for` loop
* Skipping specific values using `continue` in a `for` loop
* Validating password input using a `while` loop

---

### **Tools Used:**

* Code::Blocks IDE or Visual Studio Code
* GCC Compiler (MinGW or g++)
* Operating System: Windows or Linux

---

### **Theory:**

Loops in C++ allow the execution of a block of code multiple times as long as a specified condition is true. There are three primary types of loops:

1. **for loop** – Used when the number of iterations is known.
2. **while loop** – Used when the number of iterations is not known in advance.
3. **do-while loop** – Ensures the loop runs at least once (not used in this experiment).

These are useful for tasks like counting, conditional repetition, and input validation.

---

### **Programs Covered:**

---

#### **1. Printing Even Numbers from 0 to 10 using a For Loop**

**Algorithm:**

* Start
* Declare an integer variable `i`
* Use a `for` loop to iterate `i` from 0 to 10
* Inside the loop, check if `i % 2 == 0`
* If true, print the value of `i`
* Repeat until `i > 10`
* Stop

---

#### **2. Skipping a Value using Continue in a For Loop**

**Algorithm:**

* Start
* Declare an integer variable `i`
* Use a `for` loop to iterate `i` from 1 to 10
* Inside the loop, check if `i == 5`
* If true, use `continue` to skip the rest of the loop
* Else, print the value of `i`
* Repeat until `i > 10`
* Stop

---

#### **3. Password Validation using a While Loop**

**Algorithm:**

* Start
* Define a string variable `correctPassword` as "123"
* Declare a string variable `inputPassword`
* Use a `while (true)` loop
* Prompt the user to enter a password
* Read input into `inputPassword`
* If `inputPassword == correctPassword`

  * Display "Access granted!"
  * Use `break` to exit the loop
* Else

  * Display "Access denied! Try again."
* Repeat until correct password is entered
* Stop

---
---

### **4. Algorithm for Inverted Right-Angled Triangle of Asterisks**

**Aim:** To print an inverted right-angled triangle pattern using nested `for` loops.

**Algorithm:**

1. Start
2. Declare an integer variable `height = 5`
3. Use an outer `for` loop from `i = height` down to `1`
4. Inside the outer loop, use an inner `for` loop from `j = 1` to `i`
5. Print `"*"` in each iteration of the inner loop
6. After the inner loop, move to the next line
7. Repeat steps 4–6 until the outer loop ends
8. Stop

---

### **5. Algorithm for Pyramid Pattern of Asterisks**

**Aim:** To print a pyramid pattern of asterisks using spaces and nested `for` loops.

**Algorithm:**

1. Start
2. Declare an integer variable `height = 5`
3. Use an outer `for` loop from `i = 1` to `height`
4. Use a first inner loop from `j = 1` to `height - i`

   * Print a space `" "` in each iteration (for leading spaces)
5. Use a second inner loop from `k = 1` to `2 * i - 1`

   * Print `"*"` in each iteration (for stars)
6. After both inner loops, move to the next line
7. Repeat steps 4–6 until the pyramid is printed
8. Stop

---

### **6. Algorithm for Triangle Number Pattern**

**Aim:** To print a triangle of increasing numbers using nested `for` loops.

**Algorithm:**

1. Start
2. Declare two integer variables: `height = 4`, `number = 1`
3. Use an outer `for` loop from `i = 1` to `height`
4. Inside the outer loop, use an inner `for` loop from `j = 1` to `i`

   * Print the value of `number` followed by a space
   * Increment `number` by 1
5. After inner loop, move to the next line
6. Repeat steps 4–5 until the outer loop ends
7. Stop

---

### **7. Algorithm for Right-Angled Triangle with Space Before Asterisks**

**Aim:** To print a right-angled triangle with space before each asterisk.

**Algorithm:**

1. Start
2. Declare an integer variable `height = 6`
3. Use an outer `for` loop from `i = 1` to `height`
4. Inside the outer loop, use an inner `for` loop from `j = 1` to `i`

   * Print `" *"` in each iteration (space before star)
5. After inner loop, move to the next line
6. Repeat steps 4–5 until outer loop ends
7. Stop

---

### **Flowchart (Text Description):**

Start → Input (if any) → Loop Entry → Condition Check → Loop Body (Continue/Break) → Repeat or Exit → End

---

### **Conclusion:**

In this experiment, we successfully used `for` and `while` loops to perform repetitive tasks such as printing even numbers, skipping specific values, and validating input. This improved our understanding of control flow using loops in C++.

---

