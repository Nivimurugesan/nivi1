def factorial(n):
    if num == 0:
        return 1
    else:
        return n * factorial(n-1)
num=int(input())
print("%d",num,factorial)
