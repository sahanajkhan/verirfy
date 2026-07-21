# Write your MySQL query statement below
select  
distinct(product_id) as product_id , 
year as first_year,
quantity ,
price


from
Sales
where (product_id , year) in (select distinct product_id , min(year)  from Sales group by product_id)
-- group by 
--    product_id