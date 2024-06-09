f=open("hello.txt","w")
f.write("Hello this is a sample text.")
f.close()
print("File Created.....")

f=open("hello.txt", "a")
f.write("\nThis is a New Line")
f.close()
print("File Appended.....")

print("Lets Read the Contents of the File....\n")

f=open("hello.txt", "r")
print(f.read())