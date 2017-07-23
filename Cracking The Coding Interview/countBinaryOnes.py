def countOnes(number):
    count = 0
    num = str(bin(number))
    for letter in num:
        if letter == '1':
            count += 1

    return count

print(countOnes(9))
