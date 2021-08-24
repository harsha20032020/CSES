test=int(input())
for i in range(test):   
    x, y = input().split()
    x=int(x)
    y=int(y)
    print(x**y%1000000007)
        