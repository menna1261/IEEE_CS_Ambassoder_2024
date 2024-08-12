numsList = []

while(True):
    num = input("Enter your numbers (type done to stop) : ")
    if num == "done":
        break
    else:
        num= int(num)
        numsList.append(num)
        
if(numsList):        
    average = (sum(numsList)/len(numsList))
    print(f"Average is {average} " )
else:
    print("No numbers were entered ")
