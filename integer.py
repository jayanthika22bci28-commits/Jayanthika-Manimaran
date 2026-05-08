N1, N2 = map(int, input("enter two number").split())
for i in range(N2, N1 - 1, -1):
    for j in range(N1, i + 1):
        print(j, end=" ")
