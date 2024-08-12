num = input("Enter your number: ")

if not num.isdigit():
    print("Please enter a positive integer.")
else:
    num = int(num)
    total_sum = 0
    for i in range(1, num + 1):
        if i % 2 == 0:
            total_sum += i
                
    print(f"The Sum of even numbers is: {total_sum}")
