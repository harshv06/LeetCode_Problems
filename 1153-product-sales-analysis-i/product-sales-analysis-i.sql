# Write your MySQL query statement below
select P.product_name,PT.year,PT.price from Sales as PT
INNER JOIN Product as P on P.product_id=PT.product_id 