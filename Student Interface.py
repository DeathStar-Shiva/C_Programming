name=input("Enter you Name: ")
reg=input("Enter your Reg No: ")
dep=input("Enter your Department: ")
year=int(input("Enter Year of study: "))
sum=0
for i in range(6):
    mark=int(input("Enter Mark: "))
    sum+=mark
print("Name: ", name)
print("Reg No: ", reg)
print("Department: ", dep)
print("Academic Year: ", year, "-",year+1)
print("Total Marks: ", sum)
avg=sum/6
print("Average Marks: ", avg)
if avg<=30:
    print("Remarks: Fail, Work Hard")
elif 30<avg>=50:
    print("Remarks: Average Marks, Can Improve")
elif(70>=avg>50):
    print("Remarks: Good")
elif(90>avg>70):
    print("Remarks: Super, Aim Higher")
elif(90<avg<100):
    print("Remarks: Excellent")
else:
    print("Invalid Marks")