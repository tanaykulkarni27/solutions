'''
 	Author :- Tanay Kulkarni
	Date   :- 4-5-2021
	Time   :- 19:17:59.574178
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
	n,m = read_arr(int)
	if n>2:
		m*=2
	print(m)
t = int(input())
 
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
 
