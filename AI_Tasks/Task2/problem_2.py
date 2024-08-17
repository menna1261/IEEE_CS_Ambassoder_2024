n = int(input())

students = []

for _ in range(n):
    name = input().strip()
    grade = float(input().strip())
    students.append([name, grade])

grades = sorted(set([grade for name, grade in students]))
second_lowest_grade = grades[1]

second_lowest_students = sorted([name for name, grade in students if grade == second_lowest_grade])

for student in second_lowest_students:
    print(student)
