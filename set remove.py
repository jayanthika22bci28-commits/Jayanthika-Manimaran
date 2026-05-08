a={1,2,3}
b=a
a=a|{4}
b.discard(2)
print(a,b)
