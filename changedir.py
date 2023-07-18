import os 
dir = input("Enter a directory > ")
if os.path.exists(dir):
  os.chdir(dir)
else:
  print("The directory doesn't exist!")
