A.Problem Analysis
Input- input variables test,quiz,assignment, finalExam and totalmark.
Processing-  Check if each inputted mark is within acceptable range, if not display an error message.
- If each inputted mark is within acceptable range, calculate the totalmark by summing all individual marks.
Output - The total mark and its corresponding grades.


pseudo code
step 1:start
step 2:read test,quiz,project,assignment,finalexam
step 3:lowelimit=0,utest=15,uquiz=5,uproject=20
       uassignment=10,ufinalexam=50
step 4:if (test<lowerlimit && test>utest)
           go to step 15
       if (quiz<lowerlimit && quiz>uquiz)
           go to step 15
       if (project<lowerlimit && project>uproject)
           go to step 15
       if (assignment<lowerlimit && assignment>uassignment)
           go to step 15
       if (finalexam<lowerlimit && finalexam>ufinalexam)
           go to step 15
step 5:totalmark=test+quiz+assignment+project+finalexam
step 6:if(tatalmark>=90)
         go to step 7
     else if (totalmark<90 && totalmark>=80)
        go to step 8
     else if (totalmark<80 && totalmark>=75)
        go to step 9
     else if (totalmark<75 && totalmark>=60)
        go to step 10
     else if (totalmark<60 && totalmark>=55)
        go to step 11
     else if (totalmark<55 && totalmark>=45)
        go to step 12
     else if (totalmark<45 && totalmark>=30)
        go to step 13
     else 
        go to step 14
step 7:print"your garde is A+"
step 8:print"your garde is A"
step 9:print"your garde is B+"
step 10:print"your garde is B"
step 11:print"your garde is C+"
step 12:print"your garde is C"
step 13:print"your garde is D"
step 14:print"your garde is F"
step 15:stop
