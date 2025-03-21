# Write your MySQL query statement below
with CTE as (select d.name as Department , 
                    e.name as Employee,
                    e.salary , DENSE_RANK() 
                    over ( partition by e.departmentId 
                    order by e.salary desc)
               as "ranking" 
from Employee e join Department d on e.departmentId = d.id)
SELECT department, employee, salary 
FROM CTE
WHERE ranking <= 3;
