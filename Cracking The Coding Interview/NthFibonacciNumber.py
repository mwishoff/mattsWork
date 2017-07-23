

def fibIter(num):
    fibN = 0
    first = 1
    second = 1

    if num == 1 or num == 2:
        return first

    for i in range(num - 2):
        if first >= second:
            second += first
        elif first < second:
            first += second

    if first > second:
        fibN = first
    elif second > first:
        fibN = second

    return fibN


def fibRec(num):
    return None


def main():
    print(fibIter(8181))

main()
