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
	cnt = 0
	for i in range(1,10):
		k = ''
		for j in range(1,10):
			k+=str(i)
			if(int(k) <=n):
				cnt+=1
	print(cnt)
t = read(int)
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
