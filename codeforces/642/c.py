'''
 	Author :- Tanay Kulkarni
	Date   :- 29-4-2021
	Time   :- 11:00:53.235759
	Name   :- solve.py
''' 
def debug(*args):
    print('{',*args,'}')
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
def solve():		
	n = read(int)
	cnt = 1;odd = 3
	ans = 0
	while odd <= n:
		ans+= (odd*4-4)*cnt
		cnt+=1
		odd+=2
	print(ans)
t = int(input())
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
