import os
file = input("Enter file > ")
file_content = input("Enter file content > ")
if os.path.exists(file):
  print("The file already exists!")
else:
  new_file = open(file, "w")
  new_file.write(file_content)
