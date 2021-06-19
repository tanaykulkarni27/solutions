'''
	* Author :- Tanay Kulkarni
	* Date   :- 18-6-2021
	* Time   :- 20:05:50.301443
	* Name   :- solve.py
'''
import sys
def debug(*a):
	print(a,file = sys.stderr)
def read(typ = str):
	return typ(input())
def read_arr(typ):
	return list(map(typ,input().split()))
def solve():
	n,m,i,j = read_arr(int)
	corn1 = [[1,1],[n,m]]
	corn2 = [[1,m],[n,1]]
	d1 = 0
	d2 = 0
	for k in corn1:
		d1 =max(abs(i-k[0])+abs(j-k[1]),d1)
	for k in corn2:
		d2 =max(abs(i-k[0])+abs(j-k[1]),d2)		
	if d1 >= d2:
		print(*corn1[0],*corn1[1])
	else:
		print(*corn2[0],*corn2[1])
t = int(input())
for i in range(1,t+1):
		# print("Case #{}:".format(i),end=' ')
		solve()
 
'''
distances = set();
	mp = dict()
	for cord in corners:
		dist = abs(cord[0]-i)+abs(cord[1]-j)
		if mp.get(dist) == None:
			mp[dist] = list()
		mp[dist].append(cord)
		distances.add(dist)
	distances = list(distances)
	distances.sort()
	distances.reverse()
	# debug(distances)
	if(len(distances) < 2):
		print(i,j,n,m)
		return;
		
	else:
		tmp = mp.get(distances[0])
		# debug(tmp)
		distances.remove(distances[0])
		pair = [[0,0],[0,0]]
		gp = 0
		for a in tmp: # cord with max distance
			for b in distances: # remaining dists
				for c in mp.get(b): #cord with remaining dists
					dis = abs(c[0]-a[0])+abs(c[1]-a[1])
					if(dis >= gp):
						pair[0] = c
						pair[1] = a
		print(*pair[0],*pair[1])
 
'''
