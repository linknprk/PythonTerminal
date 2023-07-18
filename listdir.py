"""
This code:
1. Loops through files and folders
2. Checks if the file/folder is a folder
3. Loops through the directories list and outputs its content
"""
import os
directories = []
for dirs in os.listdir():
  if os.path.isdir(dirs):
    directories.append(dirs)
  else:
    continue
for dirs in directories:
  print(dirs)
