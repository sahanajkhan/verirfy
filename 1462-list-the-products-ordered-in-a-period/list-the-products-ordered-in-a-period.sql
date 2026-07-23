# Write your MySQL query statement below

select P.product_name,
sum(O.unit) As unit


from Orders AS O
join
Products As P
on P.product_id = O.product_id

where order_date like '2020-02-%'

group by
P.product_id, P.product_name
Having sum(O.unit) >= 100



