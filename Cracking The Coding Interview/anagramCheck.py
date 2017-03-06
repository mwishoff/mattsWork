# checks to see if the two strings are an anagram
# O(3n) complexity, can bring it down to O(2n) or better I think.


def anagram_check(string1, string2):
    str1 = {}

    if len(string1) != len(string2):
        return False

    for letter in string1:
        try:
            str1[letter] += 1
        except KeyError:
            str1[letter] = 1

    for letter in string2:
        if letter in str1:
            str1[letter] -= 1

    for key, value in str1.items():
        if value != 0:
            return False

    return True


def unit_test_anagram_check():
    print("anagram check Unit test")
    print("\"hello, lloeh\" - result:", anagram_check("hello", "lloeh"), "---> Expected: true")
    print("\"iceman, cinema\" - result:", anagram_check("iceman", "cinema"), "---> Expected: true")
    print("\"hello, lloeh\" - result:", anagram_check("hello", "lloeh"), "---> Expected: true")
    print("\"coal, cola\" - result:", anagram_check("coal", "cola"), "---> Expected: true")
    print("\"matt, kats\" - result:", anagram_check("matt", "kats"), "---> Expected: false")
    print("\"llozozo, lozzool\" - result:", anagram_check("llozozo", "lozzool"), "---> Expected: true")


def main():
    unit_test_anagram_check()

main()
