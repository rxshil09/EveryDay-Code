year = int(input("Enter the year: "))

if (year%400==0)| (year%4 == 0 & year % 100 != 0):
    print(year, "is a leap year")
else:
    print(year, "is not a leap year")