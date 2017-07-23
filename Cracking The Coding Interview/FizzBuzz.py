def FizzBuzz(n):
    a = 0
    b = 1
    for i in range(0, n):
        a, b = b, a + b
        if a % 15 == 0:
            print("FizzBuzz", a)
        elif a % 3 == 0:
            print("Buzz", a)
        elif a % 5 == 0:
            print("Fizz", a)
        elif isPrime(a):
            print("BuzzFizz", a)
    return a


def isPrime(n):
    if n <= 1:
        return False
    elif n <= 3:
        return True
    elif n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

