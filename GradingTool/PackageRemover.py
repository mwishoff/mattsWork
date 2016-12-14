import os, sys, re

fileNames = []

for File in os.listdir(os.getcwd()):  # Grabs the files in the directory
    fileNames.append(File)
    print File

for File in fileNames:
    if ".java" in File:
        with open(File, "r+") as doc:
            code = doc.readlines()
            for i in range(len(code)):
                if "package " in code[i]:
                    code[i] = re.sub("[^\n]", " ",code[i])

            doc.seek(0)
            for i in range(len(code)):
                doc.write(code[i])
