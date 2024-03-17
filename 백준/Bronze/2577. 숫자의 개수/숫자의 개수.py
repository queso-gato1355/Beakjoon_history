a = int(input())
for i in range(2):
    a *= int(input())
a = str(a)
number = {0:0, 1:0, 2:0, 3:0, 4:0, 5:0, 6:0, 7:0, 8:0, 9:0}
for digit in a:
    number[int(digit)] += 1
for i in range(10):
    print(number[i])