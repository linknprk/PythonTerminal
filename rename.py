import os
file = inout("Enter a file to rename > ")
if os.path.exists(file):
  new_file_name = input("Enter the new name of the file > ")
  if os.path.exists(new_name):
    print("This file already exists")
  else:
    os.rename(file, new_file_name)
