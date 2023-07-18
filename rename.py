"""
This code does the following:
1. Asks user to enter a file location
2. Checks if the file exists
3. Checks if the file exists
4. if the file exists the user enters the new name of the file
5. If the new name is already a file the program tells the user "The file already exists"
6. If the file doesn't exist it renames the fike
"""
import os
file = input("Enter a file to rename > ")
if os.path.exists(file):
  new_file_name = input("Enter the new name of the file > ")
  if os.path.exists(new_name):
    print("This file already exists")
  if not os.path.exists(new_name):
    os.rename(file, new_file_name)
