A.Problem Analysis
Input- input variables test,quiz,assignment, finalExam and totalmark.
Processing-  Check if each inputted mark is within acceptable range, if not display an error message.
- If each inputted mark is within acceptable range, calculate the totalmark by summing all individual marks.
Output - The total mark and its corresponding grades.
B.pseudo code
Step1: start.
Step2:utest=15,uquiz=5,uproject=20,uassignment=10,ufinal exam=50,lowerlimit=0.
Step3:read test,quiz,project,assignment,final exam.
Step4:if test<lower limit||test >upper limit then,then the mark is out of range.
Step5:if project<lower limit||test >upper limit ,then the mark is out of range.
Step6:if quiz<lower limit||test >upper limit ,then the mark is out of range.
Step7:if assignment<lower limit||test >upper limit ,then the mark is out of range.
Step8:if final exam<lower limit||test >upper limit, then the mark is out of range.
Step9:total mark=quiz+project+assignment+test+final exam.
Step10:if total mark>=90  then,your grade is A+
              Else If total mark<=90&&total mark>=80 then, your grade is A.
              Else If total mark>=75&&total mark<80 then, your grade is B+.
              Else If total mark>=60&&total mark<75 then, your grade is B.
              Else If total mark>=55&&total mark<60 then, your grade is C+.
              Else If total mark>=45&&total mark<55 then, your grade is C.
              Else If total mark>=30&&total mark<45 then, your grade is D.
Else your grade is F.
Step11:print total mark.
Step12:stop.

C.Flowchart
![grade calculator](https://github.com/SWEG-2015EC-Batch/Binary-Bombers/assets/149236920/c6dbffc5-ad2f-459f-be01-76eb409b5b1e)
