'''
 	Author :- Tanay Kulkarni
	Date   :- 5-5-2021
	Time   :- 18:22:59.805116
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
	n = read(int)
	s = read()
	for i in range(n):
		ok = False
		for j in range(n-1,i,-1):
			if s[j] == s[i]:
				ok = True
			if s[j] != s[i] and ok:
				print("NO")
				return
	print("YES")
t = read(int)
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
