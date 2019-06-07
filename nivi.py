def check_Power(A,y):
    if A <= 0 or y <=0:
        print "not a valid input"
    else:
        for i in range (1,20):
            x = y*i
            if x == A :
                print " True "
                print k, "power ", i , "is", A
                break
            elif x> A:
                print "false"
                break

check_Power(244140625,5)
check_Power(4096, 16)
check_Power(0, 16)
check_Power(1,1)
