'''
 	Author :- Tanay Kulkarni
	Date   :- 17-5-2021
	Time   :- 09:48:41.398086
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
	mat = []
	for i in range(n):
		mat.append(read_arr(int))
	diag = 0
	for i in range(n):
		diag+=mat[i][i]
	r = 0
	for i in range(n):
		prefs = set()
		for j in mat[i]:
			prefs.add(j)
		if len(prefs) != n:
			r+=1
	c = 0
	for i in range(n):
		prefs = set()
		for j in range(n):
			prefs.add(mat[j][i])
		if len(prefs) != n:
			c+=1
	print(diag,r,c)	
t = int(input())
for i in range(1,t+1):	
		print("Case #{}:".format(i),end=' ')
		solve()

