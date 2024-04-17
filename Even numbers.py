print("This program counts the numbers between the Numbers")
a=int(input("Enter the first number: "))
b=int(input("Enter the last number: "))
count=0
for i in range(a,b):
    if (i%2==0):
        print(i)
        count=count+1
print("Total number of even numbers: ",count)
