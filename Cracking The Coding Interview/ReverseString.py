# Reverses a C-style string, returns a Cstyle string.
# an array of characters is passed into the function


def reverse_string(string):
    reverse = []

    for i in reversed(string):
        reverse.append(i)

    return "".join(reverse)


def unit_test_reverse_string():
    Cstring = ['h', 'e', 'l', 'l', 'o']
    Cstring2 = ['c', 'o', 'd', 'e']
    Cstring3 = ['a', 'l', 'u', 'l', 'a']
    print("Reverse Cstring unit test")
    print("\"hello\" - result:", reverse_string(Cstring), "---> Expected: olleh")
    print("\"code\" - result:", reverse_string(Cstring2), "---> Expected: edoc")
    print("\"alula\" - result:", reverse_string(Cstring3), "---> Expected: alula")


def main():
    unit_test_reverse_string()

main()
