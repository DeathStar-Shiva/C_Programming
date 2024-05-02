print("                Factorial Finder")
print("                ================")
x=int(input("Enter The Number: "))
factorial = 1
if x<0:
    print("Invalid Number")
else:
    for i in range (1,x+1):
        factorial = factorial * i
    print("Factorial of ",x,"is: ",factorial)