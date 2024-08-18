import math

numbers = []

def get_numbers(N):
    print(f"Enter {N} numbers:")
    for i in range(N):
        while True:
            try:
                num = int(input())
                numbers.append(num)
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")

def find_min(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    mini = numbers[0]
    for num in numbers:
        if num < mini:
            mini = num
    return mini

def find_max(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    maxi = numbers[0]
    for num in numbers:
        if num > maxi:
            maxi = num    
    return maxi

def find_mean(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    total_sum = 0.0 
    for num in numbers:
        total_sum += num
    mean = total_sum / len(numbers)
    return mean

def find_mode(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    frequency_dict = {}
    for num in numbers:
        if num in frequency_dict:
            frequency_dict[num] += 1
        else:
            frequency_dict[num] = 1
    
    mode = max(frequency_dict, key=frequency_dict.get)
    return mode

def bubble_sort(arr):
    for n in range(len(arr) - 1, 0, -1):
        swapped = False
        for i in range(n):
            if arr[i] > arr[i + 1]:
                swapped = True
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
        if not swapped:
            break

def find_median(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    bubble_sort(numbers)
    n = len(numbers)
    if n % 2 == 0:
        median = (numbers[n//2 - 1] + numbers[n//2]) / 2
    else:
        median = numbers[n//2]
    return median

def find_range(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    range_ = find_max(numbers) - find_min(numbers)
    return range_

def find_variance(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    mean = find_mean(numbers)
    variance = sum((x - mean) ** 2 for x in numbers) / len(numbers)
    return variance

def find_STD(numbers):
    if not numbers:
        raise ValueError("List is empty.")
    variance = find_variance(numbers)
    std_dev = math.sqrt(variance)
    return std_dev

N = int(input("Enter the number of elements : "))
get_numbers(N)
print("Min:", find_min(numbers))
print("Max:", find_max(numbers))
print("Mean:", find_mean(numbers))
print("Mode:", find_mode(numbers))
print("Median:", find_median(numbers))
print("Range:", find_range(numbers))
print("Variance:", find_variance(numbers))
print("Standard Deviation:", find_STD(numbers))
