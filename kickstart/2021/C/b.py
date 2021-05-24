from math import *
def solve():
    n = int(input())
    cnt = 0
    for i in range(1,2**31):
        tmp = n-(i*(i-1)//2)
        if(tmp<=0): break
        if tmp%i == 0:
            cnt+=1
    print(cnt)
t = int(input())
for i in range(t):
    print("Case #%d:"%(i+1),end=' ')
    solve()
