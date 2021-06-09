'''
 	* Author :- Tanay Kulkarni
	* Date   :- 9-6-2021
	* Time   :- 18:42:36.926386
	* Name   :- solve.py
''' 
pre = [[0,1,2],
	   [2,0,1],
	   [1,2,0]]
import sys
def debug(*a):
	print(a,file = sys.stderr,flush=True)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
 
def solve():
	n =read(int)
	arr =read_arr(int)
	remains = [0,0,0]
	for i in arr:
		remains[i%3]+=1
	required = sum(remains)//3;
	moves = 0;
	while True:
		k = 0;ok = True
		while k < 3 and remains[k] == required:
			k+=1
		if k == 3 or not ok:
			break;
		min_index = remains.index(min(remains))
		max_index = remains.index(max(remains))
		tmp = pre[max_index][min_index]
		moves+=tmp
		# Update the values
		remains[max_index]-=1
		remains[min_index]+=1
		# Update Code End
		
	# debug(remains,required)
	print(moves)
t = int(input())
for i in range(1,t+1):
		# print("Case #{}:".format(i),end=' ')
		solve()
 
