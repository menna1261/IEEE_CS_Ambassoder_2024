def getting_input():
    try:
        num = input("Enter a value : ")
        num= float(num)
        print(f"Value :{num} ")
    except ValueError :
        print("Enter nummeric values ONLY ")

getting_input()
