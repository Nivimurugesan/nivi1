x=list(map(str,input()))
y=list(map(str,input()))
for j in range(0,len(y)):
    k=w=l=0
    w=ord(x[j])
    l=ord(y[j])
    k=w+l
    if k>96 and k<123:
        print(chr(k),end="")
    elif (k-96)<122 and(k-96)>96:
        k=k-96
        print(chr(k),end="")
    elif k>148:
        k=k-96-26
        print(chr(k), end="")
    else:
        k=k-26
        print(chr(k), end="")
