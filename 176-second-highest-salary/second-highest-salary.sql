# Write your MySQL query statement below

select max(Salary) as SecondHighestSalary From Employee
where salary < (SELECT max(Salary) from Employee);

