import pandas as pd 
def generate_sundays(year):
    date_range = pd.date_range(f'{year}-01-01',f'{year}-12-31',freq='W-SUN')
    sundays_df = pd .DataFrame(date_range,columns=["Date"])
    return sundays_df
def main():
    year = int(input("Enter the year: "))
    sundays_calender = generate_sundays(year)
    print("sundays in the year",year,":")
    print(sundays_calender)