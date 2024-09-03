lst = list(map(int, input().split()))

usrinp = int(input())

x = next((item for item in lst if usrinp == item), None)

print('yes') if x is not None else print('Baby Bye Bye Bye')
