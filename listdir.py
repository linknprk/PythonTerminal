import os
directories = []
for dirs in os.listdir():
  if os.path.isdir(dirs):
    directories.append(dirs)
  else:
    continue
for dirs in directories:
  print(dirs)
