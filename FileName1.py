import random
n = int(input('Введіть значення n = '))
print('Введіть межі [a, b], a<b')
a = int(input('Введіть значення a = '))
b = int(input('Введіть значення b = '))
var = True
while var:
    if not (a<b):
        var = True
        print('Введіть коректне значення a і b')
        a = int(input('Введіть значення a = '))
        b = int(input('Введіть значення b = '))
    else:
        var = False
svg = []
for i in range(n):
    svg.append(random.randint(a, b))
print(svg)
print('min = ', min(svg))
s = 0
for i in range(n):
    if svg[i] < 0:
        kkk = i
        break
for i in range(n):
    try:
        if i <= kkk:
            pass
        elif svg[i] < 0:
            break
        else:
            s += svg[i]
    except Exception as e:
        print('Від*ємних чисел немає')
        break
print(s)

 

    

