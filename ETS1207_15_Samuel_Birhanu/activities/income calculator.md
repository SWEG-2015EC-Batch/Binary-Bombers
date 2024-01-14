A.Problem analysis
Input-  gross_salary, worked_hours, overtime_bonus_rate.
Processing- using the following under their respective exceptions to calculate income tax.
-Pension=0.07*gross salary.
-Overtime= gross_salary*pension_rate.
-overtime_payment=(worked_hours-40)*overtime_bonus_rate.
-Then using these compute :net_salary=(gross_salary-pension-income_tax)+overtime_payment.
Output- net_salary.


B.Pseudo code
Step1:start.
Step2:read gross_salary,worked_hours,overtime_bonus_rate.
Step3:pension_rate=0.07.
Step4:pension=gross_salary*pension_rate.
Step5:overtime_payment=(worked_hours-40)*overtime_bonus_rate.
Step6:if gross_salary<=200 then, income_tax=0.
Else if gross_salary>200&&gross_salary<=600 then, income_tax=gross_salary*0.1.
Else if gross_salary>600&&gross_salary<=1200 then, income_tax=gross_salary*0.15.
Else if gross_salary>1200&&gross_salary<=2000 then, income_tax=gross_salary*0.2.
Else if gross_salary>2000&&gross_salary<3500 then, income_tax=gross_salary*0.25.
Else income_tax=gross_salary*0.3.
Step7:net_salary=(gross_salary-pension-income_tax)+overtime_payment.
Step8:print net_salary.
Step9:stop.
