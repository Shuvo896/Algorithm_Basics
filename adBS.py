def linear(lst, usrinp):
    return next((item for item in lst if usrinp == item), 0)

def traverse(lst):
    for item in lst:
        print(item)

lst = list(map(int, input("Create the list, ").split()))

usrinp = int(input("Enter the number you are searching: " ))

x =  linear(lst, usrinp)

print('yes') if x!=0 else print('Baby Bye Bye Bye')