num = input("Enter your number: ")

if not num.isdigit():
    print("Please enter a positive integer.")
else:
    num = int(num)
    
    if num < 0:
        print("Factorial is not defined for negative numbers.")
    else:
        factorial = 1
        for i in range(1, num + 1):
            factorial *= i
            
        print(f"Factorial: {factorial}")
