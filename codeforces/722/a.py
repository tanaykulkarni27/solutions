'''
 	* Author :- Tanay Kulkarni
	* Date   :- 7-6-2021
	* Time   :- 21:46:56.705968
	* Name   :- solve.py
''' 
import sys
def debug(*a):
	print(a,file = sys.stderr,flush=True)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))

def solve():
	n = read(int)
	arr = read_arr(int)
	mn = min(arr)
	cnt = 0
	for i in arr:
		if i > mn:
			cnt+=1
	print(cnt)
t = int(input())
for i in range(1,t+1):
		print("Case #{}:".format(i),end=' ')
		solve()

