print("Numbers Divisible by 3 and 5")
a=int(input("Enter First Number: "))
b=int(input("Enter Second Number: "))
counta=0
countb=0
countc=0
for i in range (a+1,b):
    if (i%3==0):
        counta=counta+1
    if (i%5==0):
        countb=countb+1
    if (i%3==0 and i%5==0):
        countc=countc+1
print("Numbers divisible by 3: ", counta)
print("Numbers divisible by 5: ", countb)
print("Numbers divisible by 3 and 5: ", countc)
