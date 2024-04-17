print("Hello World")
name=input("Enter your Name: ")
print("Hello", name)
print("Welcome to Calculator")

x=int(input("Enter First number: "))
y=int(input("Enter Second number: "))
print(x,y)
print("Choose one method")
print("1. Addition")
print("2. Substraction")
print("3. Multiplication")
print("4. Division")
m=int(input("Choose method: "))
if (m==1) :
    s=x+y
    print("Answer: ", s)
elif (m==2) :
    s=x-y
    print("Answer: ", s)
elif (m==3) :
    s=x*y
    print("Answer: ", s)
elif (m==4) :
    s=x/y
    print("Answer: ", s)
    print("Remainder: ",x%y)
else:
    print("*** Wrong Input ***")

print("Choose 1 to continue")
print("Choose 2 to exit")
a=int(input("Choose 1 or 2: "))
if (a==1) :
    print("Ok")
    x=int(input("Enter First number: "))
    y=int(input("Enter Second number: "))
    print(x,y)
    print("Choose one method")
    print("1. Addition")
    print("2. Substraction")
    print("3. Multiplication")
    print("4. Division")
    m=int(input("Choose method: "))
    if (m==1) :
        s=x+y
        print("Answer: ", s)
    elif (m==2) :
        s=x-y
        print("Answer: ", s)
    elif (m==3) :
        s=x*y
        print("Answer: ", s)
    elif (m==4) :
        s=x/y
        print("Answer: ", s)
        print("Remainder: ",x%y)
    else:
        print("*** Wrong Input ***")
    
elif (a==2):
    print("Bye")
else :
    print("Invalid Input")
