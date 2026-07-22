# Write your MySQL query statement below

select visited_on, 
amount,
average_amount
from(select distinct visited_on, sum(amount) over
(order by visited_on RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW) As amount,
ROUND(SUM(amount) OVER (ORDER BY visited_on RANGE BETWEEN INTERVAL 6 DAY PRECEDING AND CURRENT ROW)/7,2)

AS average_amount
From Customer) as whole_totals
where DATEDIFF(Visited_on, (select min(visited_on) from customer )) >=6 