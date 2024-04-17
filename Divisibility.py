print("Hello World")
a=int(input("Starting Number: "))
b=int(input("Ending Number: "))
count2=0
count3=0
count5=0
count7=0
for i in range (a, b+1):
    if (i%2==0):
        count2=count2+1
    if (i%3==0):
        count3=count3+1
    if (i%5==0):
        count5=count5+1
    if (i%7==0):
        count7+count7+1
print("For numbers between: ", a, ",", b)
print("Numbers divisible by 2: ", count2)
print("Numbers divisible by 3: ", count3)
print("Numbers divisible by 5: ", count5)
print("Numbers divisible by 7: ", count7)
