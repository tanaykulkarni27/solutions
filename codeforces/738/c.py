'''
 * Author :- Tanay Kulkarni
 * Date   :- 14-8-2021
'''
import sys
sys.setrecursionlimit(1000000000)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
def solve(case_number):
	n = read(int)
	a = read_arr(int)
	res = [i for i in range(1,n+1)]
	try:
		x = a.index(1)
		res.insert(x,n+1)
	except:
		res.append(n+1)
	print(*res)
t = int(input())	
for i in range(1,t+1):
		solve(i)
