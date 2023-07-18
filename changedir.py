"""
I'm retarded
IQ < 15
I probably can't even get a job
I think i should kill myself but I don't feel that way
My family probably won't be sad if I die
My family will probably throw a party when I die
"""
import os 
dir = input("Enter a directory > ")
if os.path.exists(dir):
  os.system("cd " + dir)
else:
  print("The directory doesn't exist!")
