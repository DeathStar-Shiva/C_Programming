import time

f=open("hello.txt","w")
f.write("Hello this is a sample text.")
f.close()
print("File Created", end="")
for i in range(5):
    time.sleep(0.1)
    print(".", end="")

f=open("hello.txt", "a")
f.write("\nThis is a New Line")
f.close()
print("\nFile Appended", end="")
for i in range(5):
    time.sleep(0.1)
    print(".", end="")

print("\nLets Read the Contents of the File.", end="")
for i in range(5):
    time.sleep(0.1)
    print(".", end="")
f=open("hello.txt", "r")
print("\n\n",f.read())