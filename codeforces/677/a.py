'''
 	Author :- Tanay Kulkarni
	Date   :- 3-5-2021
	Time   :- 13:00:42.743415
	Name   :- solve.py
''' 
from random import *
def debug(*a):
	print(a)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
 
def solve():
	a = read(int)
	tmp = int(str(a)[0])
	ans = (tmp-1)*10
	for i in range(len(str(a))):
		ans+=i+1
	print(ans)
t = 1
t = int(input())
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
