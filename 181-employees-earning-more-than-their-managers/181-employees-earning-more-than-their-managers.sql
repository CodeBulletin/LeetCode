# Write your MySQL query statement below

Select E.name as `Employee` from Employee as E, Employee as D where E.managerId = D.id and E.salary >= D.salary;