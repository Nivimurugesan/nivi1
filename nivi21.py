x, a, f, k = map(int, input().split())
count = 0
a2 = a-f
if (a2 >= 0):
    di = (x-f)*2
    for i in range (k):
        if (i == k-1):
             di =di/ 2
        if (a2 < di):
            a2 = a
            count += 1
        a2 = a2 - di
        if (a2 < 0):
            count = -1
            break
        di = 2*x - di

    print (count)
else:
    print (-1)
