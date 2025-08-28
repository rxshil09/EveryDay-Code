def sum_all(*args):
    print(args)  # args as a tuple aate hai jo iterable hote hai
    for i in args:
        print(i*2)
    
    return sum(args)

print(sum_all(1,2,3,4))
# print(sum_all(1,2,3,4,5))
# print(sum_all(1,2,3,4,5,6,7,8,9,10))