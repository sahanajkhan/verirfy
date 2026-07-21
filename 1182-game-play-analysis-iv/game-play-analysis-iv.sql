# Write your MySQL query statement below

select  
ROUND(count(DISTINCT  player_id)/ (select count(DISTINCT player_id) from activity),
2) AS fraction

from 
Activity
where

(player_id, DATE_SUB(event_date, INTERVAL 1 DAY)) IN(
    SELECT
        player_id,
        min(event_date)

    from 
       Activity
    group by
    player_id
);