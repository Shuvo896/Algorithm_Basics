def binary(mnlst, start, end, userInp):

    if start > end:
        return -1
    
    mid = (start + end)//2
    
    if mnlst[mid] == userInp:
        # print(mnlst[mid])
        return mid
    elif mnlst[mid] < userInp:
        return binary(mnlst, mid+1, end, userInp)
    elif mnlst[mid] > userInp:
        return binary(mnlst, start, mid-1, userInp)

lst = list(map(int, input("Inter the listed numbers: ").split()))
lst.sort()
print(lst)

userInp = int(input("Enter the number you wanna search: "))

res = binary(lst, 0, len(lst)-1, userInp)
if res != -1:
      print(f"The value of index {res+1} is,")
      print(userInp)
else:
      print("Nothing found")
