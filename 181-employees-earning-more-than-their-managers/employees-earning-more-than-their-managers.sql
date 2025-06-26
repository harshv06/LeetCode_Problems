/* Write your T-SQL query statement below */

select E.name As Employee from Employee as E
Join Employee as Emp 
on E.managerId=Emp.id
where E.salary>Emp.salary