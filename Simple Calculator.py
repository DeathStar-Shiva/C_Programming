print("\tWelcome to my Calculator")
print("\t========================")

def cal():
    x=int(input("Enter Number 1: "))
    y=int(input("Enter Number 2: "))
    print(x, "+", y, "=", (x+y))
    print(x, "-", y, "=", (x-y))
    print(x, "*", y, "=", (x*y))
    print(x, "/", y, "=", (x/y))
    print(x, "%", y, "=", (x%y))

cal()
x=int(input("Enter 1 to Start Again "))
if x==1:
    cal()