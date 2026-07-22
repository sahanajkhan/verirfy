# Write your MySQL query statement below
select
CASE
when id % 2 = 1 AND id = ( select max(id) from Seat) THEN id
when id % 2 = 1 THEN id + 1
ELSE id - 1
END AS id,
   student 
From Seat 
ORDER BY  id ASC;

