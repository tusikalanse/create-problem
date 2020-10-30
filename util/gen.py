import os, sys

os.system("g++ data.cpp -o data")

os.system("./data")

os.system("g++ std.cpp -o std")

for dirpath, dirnames, filenames in os.walk("./"):  
    for file in filenames :  
      if os.path.splitext(file)[1] == '.in':
        os.system("./std < " + os.path.splitext(file)[0] + ".in > " + os.path.splitext(file)[0] + ".out")
