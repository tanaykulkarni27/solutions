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
	n,k = read_arr(int)
	a = read_arr(int)
	b = read_arr(int)
	a.sort();
	b.sort(reverse = True)
	i = 0
	while k>0 and i < n:
		a[i] = max(a[i],b[i])
		k-=1
		i+=1
	print(sum(a))	
t = int(input())
 
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
