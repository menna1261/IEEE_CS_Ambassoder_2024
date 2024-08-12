prime_factors = []

def is_prime(x):
    for i in range (2,(x//2)+1):
        if x%i==0:
            return False
    return True

num = input("Enter a number to get its prime factors : ")

if not num.isdigit():
    print("Please enter a positive integer")
else:
    num = int(num)
    for i in range (2, (num//2 +1)):
        if num%i == 0:
            if is_prime(i):
                prime_factors.append(i)
    
    print (f"Prime factors {prime_factors}")
