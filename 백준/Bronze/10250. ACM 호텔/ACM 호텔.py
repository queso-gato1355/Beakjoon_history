trial = int(input())
for _ in range(trial):
    H, W, N = tuple(map(int, input().split()))
    print((N%H if N%H != 0 else H) * 100 + N//H + (1 if N%H != 0 else 0))