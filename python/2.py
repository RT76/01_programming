list=[9,6,7,5,8,2,3,4,1]
print(list[-1])
print(list[0])
list.append(10)
print(list)
del list[-1]
print(list)
list.sort(reverse=True)
print(list)
for number in list:
    print(number)