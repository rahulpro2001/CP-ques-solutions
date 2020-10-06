n=int(input())
l=[0,0,0]
for i in range(n):
    x=input().split()
    y=list(map(int,x))
    for m in range(len(y)-1):
        l[m]=l[m]+y[m]
if l[0]==0 and l[1]==0 and l[2]==0:
    print("YES")
else:
    print("NO")
