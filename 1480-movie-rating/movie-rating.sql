# Write your MySQL query statement below

(
    select u.name AS results
    from MovieRating mr
    join Users u ON mr.user_id = u.user_id
    group by mr.user_id
    order by COUNT(mr.movie_id) DESC, u.name ASC
    LIMIT 1
)

UNION ALL
(
    select m.title AS results
    from MovieRating mr
    join Movies m ON mr.Movie_id = m.movie_id
    where mr.created_at between '2020-02-01' AND '2020-02-29'
    group by mr.movie_id 
    order by AVG(mr.rating) DESC, m.title ASC
    limit 1
);