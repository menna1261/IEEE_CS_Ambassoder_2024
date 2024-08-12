proper_divisors = []

num = input("Enter your number : ")

if not num.isdigit():
    print("Please enter a positive integer : ")
else:
    num = int(num)
    for i in range (1 , (num//2)+1):
        if num%i ==0:
            proper_divisors.append(i)
            
    if sum(proper_divisors) == num :
        print(f"{num} is a perfect number .")
    else:
        print(f"{num} isn't a perfect number .")
