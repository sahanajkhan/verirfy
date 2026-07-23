# Write your MySQL query statement below

select id, count(*) As num

from  (
    select requester_id AS id from RequestAccepted
    union ALL
    select  accepter_id  AS id from RequestAccepted
) AS a_f





group by
id

order by num DESC
limit 1;