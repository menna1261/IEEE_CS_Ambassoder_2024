Day = int(input("Day: "))
Month = int(input("Month: "))
Year = int(input("Year: "))

def is_leap_year(year):
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

if Month == 2:
    if is_leap_year(Year) and Day == 29:
        Day = 1
        Month += 1
    elif not is_leap_year(Year) and Day == 28:
        Day = 1
        Month += 1
    else:
        Day += 1

elif (Month == 1 or Month == 3 or Month == 5 or Month == 7 or Month == 8 or Month == 10 or Month == 12):
    if Day == 31:
        Day = 1
        if Month == 12:
            Month = 1
            Year += 1
        else:
            Month += 1
    else:
        Day += 1

elif (Month == 4 or Month == 6 or Month == 9 or Month == 11):
    if Day == 30:
        Day = 1
        Month += 1
    else:
        Day += 1

print(f"Day: {Day} Month: {Month} Year: {Year}")
