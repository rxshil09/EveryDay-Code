num = int(input("enter the numner n: "))
sum = 0

for n in range(1,num+1):
    if n%2 == 0:
        sum+=n;
    # print(sum)

print(sum)