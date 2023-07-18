"""
The proram asks the user to enter a file
The program then aks the user to enter the file content
Finally the program checks if the file already exists if it does the program says The file exists
Otherwise it writes the file with file content
"""
import os
file = input("Enter file > ")
file_content = input("Enter file content > ")
if os.path.exists(file):
  print("The file already exists!")
else:
  new_file = open(file, "w")
  new_file.write(file_content)
  new_file.close()
