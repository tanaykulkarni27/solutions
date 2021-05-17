'''
 	Author :- Tanay Kulkarni
	Date   :- 17-5-2021
	Time   :- 16:07:05.029332
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
	s = ''.join([int(x) * '(' + x + ')' * int(x) for x in str(input())])
	while ')(' in s:
		s = s.replace(')(','')
	print(s)
t = int(input())

for i in range(1,t+1):
		print("Case #{}:".format(i),end=' ')
		solve()

