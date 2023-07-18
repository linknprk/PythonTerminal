"""
I'm retarded
IQ < 15
I probably can't even get a job
I think I should kill myself but I don't feel that way
My family probably won't be sad if I die
My family will probably throw a party when I die
I'm too dumb to do anything
My code probably won't work
"""
import os 
dir = input("Enter a directory > ")
if os.path.exists(dir):
  os.system("cd " + dir)
else:
  print("The directory doesn't exist!")
