# Write your MySQL query statement below
select person_name
FROM (
    select person_name,
    sum(weight) OVER (ORDER BY turn) AS total_weight from Queue
) AS total_queue

where total_weight <=1000

order by
  total_weight DESC
limit 1;
