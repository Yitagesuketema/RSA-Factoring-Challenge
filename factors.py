#!/usr/bin/python3
with open("tests/test00")  as file:
    for line in file:
        n = int(line)
        p = int(2)

        while n%p != 0:
            p+=1
        q = int(n/p)
        print("{:d} = {:d} * {:d}".format(n,q,p))