def two_sets(set1 , set2):
    return set1.intersection(set2)

set1 = set(input("Enter the first set (without spaces) : "))
set2 = set(input("Enter the second set (without spaces) : "))
inter = two_sets(set1,set2)
print(inter)
