num = int(input("enter the number: "))

def fact(n):
    if n == 1: return 1
    return n*fact(n-1)

ans = fact(num)
print(ans)