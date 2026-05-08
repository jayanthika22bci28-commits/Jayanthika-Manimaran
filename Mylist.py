list=int(input("enter the list of numbers:"))
Mylist1==[]
Mylist2==[]
for i in range(list):
    if (i%2==0)and(i%3!=0):
        print(i)
        Mylist1.append(i)
        for i in Mylist1:
            if i%9==0:
                Mylist2.append(i)
                print(Mylist2)
                print(Mylist1)
        
