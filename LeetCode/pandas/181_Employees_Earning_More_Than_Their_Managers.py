import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    res_df = employee[employee['salary'] > employee['managerId'].map(employee.set_index('id')['salary'])]
    res_df = res_df[['name']].rename(columns={'name': 'Employee'})
    return res_df
    