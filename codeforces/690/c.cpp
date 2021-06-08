'''
 	* Author :- Tanay Kulkarni
	* Date   :- 8-6-2021
	* Time   :- 11:03:15.262696
	* Name   :- solve.py
''' 
import itertools
import sys
def debug(*a):
	print(a,file = sys.stderr,flush=True)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
pre = []
def solve():
	n =read(int)
	for i in pre:
		ss = 0
		for j in str(i):
			ss += int(j)
		if(ss == n):
			print(i)
			return
	print(-1)
s = '123456789'
for i in range(1,1<<9):
	ss = ''
	for j in range(9):
		if i & 1<<j != 0:
			ss+=s[j];
	pre.append(int(ss));
pre.sort()
t = int(input())
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
 
