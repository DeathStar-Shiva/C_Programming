import os

def no():
    print("\t\tOdd or Even Number")
    print("\t\t==================")
    x=int(input("Enter Any Number: "))
    if x%2==0:
        print("Even Number")
    else:
        print("Odd Number")
    a=int(input("Enter 1 to start again "))
    if a==1:
        os.system('cls')
        no()
no()