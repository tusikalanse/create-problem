import os, sys

os.system("g++ validator.cpp -o validator")

for dirpath, dirnames, filenames in os.walk("./"):  
    for file in filenames :  
      if os.path.splitext(file)[1] == '.in':
        print("validate " + os.path.splitext(file)[0] + ".in", end='')
        os.system("./validator < " + os.path.splitext(file)[0] + ".in")
        print(" ... passed")