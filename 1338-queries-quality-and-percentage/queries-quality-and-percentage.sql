# Write your MySQL query statement below

select q.query_name ,
ROUND(SUM(rating / position) / count(query_name),2) as quality , 
ROUND(AVG(rating < 3)*100,2) as poor_query_percentage
from
Queries as q
Group by
Q.query_name
