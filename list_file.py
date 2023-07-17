import os
files = []
for file in os.listdir():
  if os.path.isfile(file):
    files.append(file)
  else:
    continue
for file in files:
  print(file)
