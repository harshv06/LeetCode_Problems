# Write your MySQL query statement belo
select EU.unique_id,EL.name from Employees as EL
LEFT JOIN EmployeeUNI as EU on EL.id=EU.id