"""
1. Get user to enter a file or directory
2. Check if the file/folder exists
3. Check if the file/folder is a file or folder
4. If the it's a folder delete it
5. It's a file and get's deleted
6. The file wasn't found tell the user the file/directory doesn't exist
"""
import os
filedir = input("Enter a file or directory > ")
if os.path.exists(filedir):
  if os.path.isdir(filedir):
    os.removedir(filedir)
  else:
    os.remove(filedir)
else:
  print("The file/directory doesn't exist!")
