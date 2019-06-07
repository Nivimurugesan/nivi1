z=input()
L=[]
for y in z:
	if y not in L:
		L.append(y)
	else:
		break
print(len(L))
