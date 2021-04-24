 #'''
 #	Author :- Tanay Kulkarni
#	Date   :- 24-4-2021
#	Time   :- 20:11:29.902276
#	Name   :- solve.py
 #''' 
def debug(*args):
		try:
			print(*args)
		except:
				print(args)
def solve():
		n = int(input())
		if(n%2050 != 0):
			print(-1)
			return;
		n//=2050
		ans = 0
		if n>9:
			for i in str(n):
				ans += int(i)
		else:
				ans = n
		print(ans)
		
t = int(input())
for i in range(1,t+1):
		#print("Case #{}:".format(i),end=' ')
		solve()
