'''
 	Author :- Tanay Kulkarni
	Date   :- 3-5-2021
	Time   :- 17:55:39.695597
	Name   :- solve.py
''' 
from random import *
def debug(*a):
	print(a)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
def prf(n:int):
	l = 0
	r = n
	while l<=r:
		mid = l+(r-l)//2
		if mid*mid == n:
			return mid
		if mid*mid > n:
			r = mid-1
		else:
			l = mid+1
	return -1
def solve():
	n = read(int)
	if(n%4 == 0 and prf(n//4) != -1):
		print("YES")
	elif(n%2 == 0 and prf(n//2) != -1):
		print("YES")
	else:
		print("NO")
t = int(input())
 
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
 
