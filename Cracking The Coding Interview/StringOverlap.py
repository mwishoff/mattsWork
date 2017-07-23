

def find_intersection(string1, string2):
    s1Hash = {}
    a = []
    b = []
    for num in string1:
        s1Hash[num] = num

    for num in string2:
        if num in s1Hash:
            a.append(num)
        else:
            b.append(num)

    return [a, b]


def two_strings(a, b):
    in_list = []
    out_list = []

    if len(a) > len(b):
        longer = len(a)
    else:
        longer = len(b)

    for i in range(longer):
        if a[i] == b[i]:
            in_list.append(a[i])
        else:
            out_list.append(a[i])
            out_list.append(b[i])

    return in_list, out_list


def tests():
    print("input: \"5678\", \"5179\" - result:", find_intersection("5678", "5179"), "---> Expected: [5,7], [6,1,8,9]")
    print("input: \"6587\", \"5179\" - result:", find_intersection("6587", "5179"), "---> Expected: [5,7], [6,1,8,9]")
    print("input: \"5678\", \"1234\" - result:", find_intersection("5678", "1234"), "---> Expected: [], [1,2,3,4,5,6,7,8]")
    print("input: \"5678\", \"5678\" - result:", find_intersection("5678", "5678"), "---> Expected: [5,6,7,8], []")


def main():
    tests()

main()
