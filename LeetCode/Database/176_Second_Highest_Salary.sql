select
    MAX(salary) SecondHighestSalary
from
    Employee
where
    salary < (
        select
            MAX(salary)
        FROM
            Employee
    )