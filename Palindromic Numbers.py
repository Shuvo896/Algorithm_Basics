# def palindromicNumbers():

lst =  []

t = int(input("Enter the number of cases: " ))

for x in  range (1,t+1):
    inp = int(input())
    lst.append(inp)

for item in lst:
    lst[1] = lst[t+1]
    print("Yes")



