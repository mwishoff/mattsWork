

s = "0(screen tablet)"


test2 = s[0]
fixed = s[2:]

# print(test2)
# print(fixed)

lst = [[(3, 14, 15), (3, 39, 40), (3, 61, 62), (8, 114, 115)]]
lst2 = [[(10, 3, 4)], [(2, 137, 140)]]
newList = []
newList2 = []

print(lst)
print(lst2)

for Lst in lst2:
    newList2.extend(Lst)
# print(newList2)

# print(len(lst[0]))
for Lst in lst:
    newList.extend(Lst)
# print(newList)

print("*******")
print(newList2)
print(newList)
print("*******")
print(newList2[0])
print(newList[0])
# for tup in lst:
#     print(tup)