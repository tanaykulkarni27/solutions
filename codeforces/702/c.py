'''
 	* Author :- Tanay Kulkarni
	* Date   :- 9-6-2021
	* Time   :- 10:09:31.953962
	* Name   :- solve.py
''' 
import sys
def debug(*a):
	print(a,file = sys.stderr,flush=True)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
pre = [];
def solve():
	n = read(int)
	l = 0;
	r = 9999
	while l<=r:
		ss = pre[l]+pre[r]
		if(ss == n):
			print("YES")
			return
		if ss < n:
			l+=1
		else:
			r -=1
	print("NO")
for i in range(1,10021):
	if int(i*i*i) > int(1e12):
		break;
	pre.append(i*i*i);
t = int(input())
for i in range(1,t+1):
		# print("Case #{}:".format(i),end=' ')
		solve()
 
