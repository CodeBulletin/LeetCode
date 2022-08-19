# Write your MySQL query statement below
SELECT a.email as `Email` FROM Person as a, Person as b WHERE a.email = b.email and a.id != b.id GROUP by a.email