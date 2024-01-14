A.Problem analysis
Input- initialize variables num1 and num2, op,and z.
Processing- using the switch, conditional and loop statements to  select an operator and compute the result.
-compute the result with the exception in num1/num2 ,where num2 ≠ 0.
Output-displaying the result.


B.pseudo code

step 1:start
step 2:read num1,num2,op
step 3:select case op of
      '+':result=num1+num2
      '-':result=num1-num2
      '*':result=num1* num2
      '/':if(num2!=0)
           result=num1/num2
          else go to step
      '%':if(num2!=0)
           result=num1%num2
          else go to step 4
    otherwise
          go to step 4
step 4:print "error"
step 5:print result
step 6:read choice
step 7:if (choice=='0')
         go to step 8
        else go to step 2
step 8:stop
