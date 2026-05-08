s1=int(input("enter the mark of sub1:"))
s2=int(input("enter the mark of sub2:"))
s3=int(input("enter the mark of sub3:"))
s4=int(input("enter the mark of sub4:"))
total=s1+s2+s3+s4
agg=total/4
print("The total mark of the subjects is:",total)
print("The aggregate of the subject is:",agg)
if agg>75:
    print("The grade is distinction")
elif 60<=agg<75:
    print("The grade is First division")
elif 50<=agg<60:
    print("The grade is Second division")
elif 40<=agg<50:
    print("The grade is Third division")
else:
    print("fail")
    

