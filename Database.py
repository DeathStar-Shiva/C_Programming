print("Database")
name=[]
no=[]
days=[]
salary=[]
x=int(input("Enter Number of People: "))
for i in range(x):
    name.append(input("Enter your Name: "))
    no.append(input("Enter your Mobile no: "))
    wdays=input("Enter your No of Working Days: ")
    days.append(wdays)
    salary.append(wdays * 5000)
    i+=1
print("")
for j in range(x):
    print("Person ", j+1)
    print("Name: ",name[j])
    print("Mobile No: ",no[j])
    print("Working Days: ",days[j])
    print("Salary: ", salary[j])
    print("")