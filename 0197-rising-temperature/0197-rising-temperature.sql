# Write your MySQL query statement below
select w1.id as Id from Weather w1 inner join weather w2 on date(w1.recordDate) = date(w2.recordDate + interval 1 day) where w1.temperature > w2.temperature;