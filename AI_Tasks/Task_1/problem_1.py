numbers = []
while True :
    num = int(input("Enter a number (-1 to stop)"))
    if num == -1 :
        break
    else:
        numbers.append(num)

largest = max(numbers)
smallest = min(numbers)

print (largest , smallest)
