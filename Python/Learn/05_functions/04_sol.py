import math

PI = math.pi

rad = float(input("enter the radius: "))

def operations(r):
    area = PI * (r ** 2)
    circum = 2 * PI * r
    
    return area, circum

a, c = operations(rad)
round_a = round(a, 2)
round_c = round(c, 2)
print("area =",round_a, "circumference =",round_c)