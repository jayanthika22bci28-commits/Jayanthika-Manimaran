a={1,2,3}
b=a
a=a-{2}
b.remove(1)
print(sorted(a),sorted(b))
