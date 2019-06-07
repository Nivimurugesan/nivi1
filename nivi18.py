v=input()
substring=""
a=0
op=[]
if v==v[::-1]:
  op.append(0)
for y in range(len(v)-1):
  for z in range(y+1,len(v)):
    substring=v[y:z+1]
    if substring==substring[::-1]:
      op.append(len(v)-len(substring))
     
print(min(op))
