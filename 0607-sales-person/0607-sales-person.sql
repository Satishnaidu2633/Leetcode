# Write your MySQL query statement below
select name from Salesperson where sales_id not in (select distinct o.sales_id from Orders o join Company c on o.com_id = c.com_id where c.name = 'RED');