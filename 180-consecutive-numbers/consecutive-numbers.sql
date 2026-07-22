# Write your MySQL query statement below
select DISTINCT a.num as  ConsecutiveNums from Logs as a join Logs as b
on a.num = b.num
AND b.id between a.id and a.id+2
group by a.id , a.num
HAVING
count(b.num) = 3;