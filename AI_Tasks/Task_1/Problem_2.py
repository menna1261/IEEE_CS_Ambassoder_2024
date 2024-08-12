day = int(input("Day: "))
month = int(input("Month: "))
year = int(input("Year: "))

def is_leap_year(year):
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

if month == 2:
    if is_leap_year(year) and day == 29:
        day = 1
        month += 1
    elif not is_leap_year(year) and day == 28:
        day = 1
        month += 1
    else:
        day += 1

elif (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
    if day == 31:
        day = 1
        if month == 12:
            month = 1
            year += 1
        else:
            month += 1
    else:
        day += 1

elif (month == 4 or month == 6 or month == 9 or month == 11):
    if day == 30:
        day = 1
        month += 1
    else:
        day += 1

print(f"Day: {day} Month: {month} Year: {year}")
