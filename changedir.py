import os 
dir = input("Enter a directory > ")
if os.path.exists(dir):
  os.system("mkdir " + dir)
else:
  print("Directory already exists")
