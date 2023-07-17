import os
file = input("Enter a file > ")
if os.path.exists(file):
  print("True")
else:
  print("False")
