# Write your MySQL query statement below
SELECT 
(select distinct (salary ) 
     FROM Employee 
     ORDER BY salary DESC LIMIT 1 OFFSET 1 ) as SecondHighestSalary;