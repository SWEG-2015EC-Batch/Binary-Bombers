I.Inverted hollow full pyramid

Problem analysis
Input- no input. 
Processing- using nested loops to print a pattern of asterisks and spaces to form a diamond shape.
Output- a diamond-shaped pattern consisting of asterisks and spaces.

Pseudocode

Step 1: Start the program.
Step 2: Set rows = 6.
Step 3: For i from rows to 1 and for space from 1 to (rows - i), Print "  ".
Step 4:For j from 1 to (2 * i - 1),
     - If (j == 1 || j == 2 * i - 1 || i == rows) ,then print "* "
      -Else, then Print "  ".
 Step 5: Exit the program.
