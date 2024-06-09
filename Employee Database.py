import os
from termcolor import colored

def file(emp_no):
    f=open("C:\\Users\\Admin\\Desktop\\Employee Database.txt", "a")
    employeeheader = colored("\nEmployee "+ str(emp_no), 'red')
    print(employeeheader)
    f.write("\nEmployee "+ str(emp_no))
    f.write("\n"+"="*(len(str(emp_no))+9))
    name=input("Enter Your Name: ")
    f.write("\n\nName: "+ name)
    emp_id=input("Enter Your Employee ID: ")
    f.write("\nEmployee ID: "+ emp_id)
    print("1. New Recurit")
    print("2. Team Leader")
    print("3. Supervisor")
    print("4. Sr Manager")
    pono=int(input("Enter Your Position Number: "))
    days=int(input("Enter Total Number of Working Days: "))
    f.close()
    f=open("C:\\Users\\Admin\\Desktop\\Employee Database.txt", "a")
    salary((pono-1),days)
    f.write("\n-----------------------------------------------------------------------------------\n")
    f.close()

def salary(pono,days):
    f=open("C:\\Users\\Admin\\Desktop\\Employee Database.txt", "a")
    position=["New Recurit", "Team Leader", "Supervisor", "Sr Manager"]
    f.write("\nPosition: " + position[pono])
    sal= [1000, 2000, 3500, 5000]
    f.write("\nWorking Days: " + str(days))
    f.write("\nSalary in Total: " + str(sal[pono]*days))
    f.close()
    os.system('cls')


def read():
    f=open("C:\\Users\\Admin\\Desktop\\Employee Database.txt", "r")
    print(f.read())
    f.close()

os.system('cls')
f=open("C:\\Users\\Admin\\Desktop\\Employee Database.txt", "w")
f.write("\t\t\t\tEmployee Database")
f.write("\n\t\t\t\t=================\n")
f.close()
x=int(input("Enter Number of Employees: "))
os.system('cls')
for i in range (x):
    file(i+1)
rc=int(input("Enter 1 to Dislpay the Data File"))
if rc==1:
    read()