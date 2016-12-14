import sys
from subprocess import call

newSourceName = "MatrixMultFixed.cpp"
source = "MatrixMultiplicationProject2.cpp"
curlyCounter = 0
count = 0
outputArray = []
iterator = 0


f = open(source, "r+")
newSource = open(newSourceName, 'w')

lines = f.readlines()


for i in lines:
    if "{" in i:
        curlyCounter += 1

print curlyCounter

# i is index, range(len(lines)) is the length of lines.
for i in range(len(lines)):
    # adds the Global variable that tracks times it loops through blocks
    if "int main" in lines[i]:
        lines[i - 1] = lines[i - 1].rstrip()
        lines[i - 1] = "\nlong int GLOBAL_BODY_COUNTER[" + str(curlyCounter) + "];\n\n"

    if "{" in lines[i]:
        lines[i] = lines[i].rstrip()
        lines[i] += "GLOBAL_BODY_COUNTER[" + str(count) + "]++;\n"
#        lines[i] += "\n"
        count += 1

    if "return 0" in lines[i]:
        # inject the code needed to output to a file.
        #               freopen (       "     DataFor    source    .txt    " ,"w" ,stdout);
        lines[i] = "\n\tfreopen (" + "\"" + "DataFor" + source[:-4] + ".txt\",\"w\",stdout);\n\n"
        lines[i] += "\tcout << \"Times Ran \" << endl;\n"
        lines[i] += "\tfor(int i = 0; i < " + str(curlyCounter) + "; i++)\n"
        # cout << "Curly: " << i << ", Times Ran: " << GLOBAL_BODY_COUNTER[i] << endl;
        lines[i] += "\t\tcout << GLOBAL_BODY_COUNTER[i] << endl;\n\n"
        lines[i] += "\treturn 0;\n"
    sys.stdout.write(lines[i])  # prints the source program

for i in lines:
    newSource.write(i)  # Writes the new program to another .cpp file.

newSource.close()

# Execute C++ code from python.
#   set up the required environment for compiling and linking, then compile
call(["vcvars32.bat", "&&", "cl.exe", "/EHsc", newSourceName])
#   run resulting executable
sourceEXE = newSourceName[:-4] + ".exe"
print "This is my source program: " + sourceEXE
call([sourceEXE])

#  this code will be inputing the block comments into the original C++ program.
outputFile = open("DataFor" + source[:-4] + ".txt")
outputLines = outputFile.readlines()

for i in range(len(outputLines)):
    if i > 0:
        outputArray.append(outputLines[i].rstrip())

print outputArray

f.seek(0)
fLines = f.readlines()

for i in range(len(fLines)):
    if "{" in fLines[i]:
        fLines[i] = fLines[i].rstrip()
        fLines[i] += "/* Ran " + outputArray[iterator] + " times */\n"
        iterator += 1
    print fLines[i]

f.seek(0)
for i in range(len(fLines)):
    f.write(fLines[i])


outputFile.close()
f.close()
# already done
# Currently reads in a file, and searches through to find the '{' braces.
# Can count curlies (Works so far with macros)
# inject globalBodyCounter into source code of new C++ file.
# output numeric results of the GlobalBodyCounter into a text file.
#
# inject comments of the results into the old C++ file.
#


# need to do
# Compile new C++ file (Technically extra, could do this manually)
# Run new C++ file (Technically extra, could do this manually)
#
#
