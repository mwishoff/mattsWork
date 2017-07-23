

# given a list [[2,5],[9,15],[3,10]]
# where each interval is a riders trip on the elevator
# find the longest interval with the most riders on the elevator

# num riders var

# can a differential list help?
# skip list?

# O(n * m) m being the number of floors your building has, n being the number of riders.
def findLongestIntervalSol1(tripLst):

    max = 0
    elevator = {}
    freq = []
    low = 16 # height off building + 1
    high = 0

    for lst in tripLst:
        for rng in range(lst[1] - lst[0]):
            if rng in elevator:
                elevator[rng] += 1
            else:
                elevator[rng] = 1

    for key, val in elevator:
        if val > max:
            max = val
            freq = [key]
        elif max != val:
            freq.append(key - 1)

    return freq

#def findLongestIntervalSol2(tripLst):


def main():
    lst = [[2, 5], [9, 15], [3, 10]]
    print(findLongestIntervalSol1(lst))

main()