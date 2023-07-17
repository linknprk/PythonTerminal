import os
filedir = input("Enter a file or directory > ")
if os.path.exists(filedir):
  if os.path.isdir(filedir):
    os.removedir(filedir)
  else:
    os.remove(filedir)
else:
  print("The file/directory doesn't exist!")
