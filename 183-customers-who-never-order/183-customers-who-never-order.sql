# Write your MySQL query statement below
SELECT A.Name AS Customers FROM Customers A WHERE A.Id NOT IN (SELECT B.CustomerId FROM Orders B)