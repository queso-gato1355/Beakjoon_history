def sumation(n):
    return n * (n + 1) // 2

trial = int(input())

for i in range(trial):
    test = input()
    test = [x for x in test.split('X') if len(x) != 0]
    a = 0
    for number in test:
        a += sumation(len(number))
    print(a)