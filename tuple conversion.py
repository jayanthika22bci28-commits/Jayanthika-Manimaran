lst=int(input("enter the list of number:"))
for i in lst:
    if i%2==0:
        i=i**2
    else:
        i=i**3
print(i)
print(tuple(i))
