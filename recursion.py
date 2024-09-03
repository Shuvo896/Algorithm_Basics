def recursion(x):

    # if(x==1): return 1
    if(x==0): return 0

    return x + recursion(x-1)

n = int(input())

res = recursion(n)
print(res)